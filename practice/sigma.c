#include <ncurses.h>
#include <string.h>
#include <locale.h>


// gcc sigma.c -o sigma -lncurses

#define MAX_INPUT 50

int main() {
    initscr();            // Initialize ncurses
    noecho();             // Disable automatic echoing of typed characters
    cbreak();             // Disable line buffering
    keypad(stdscr, TRUE); // Enable function keys

    char input[MAX_INPUT] = {0}; // Input buffer
    int pos = 0; // Current cursor position

    WINDOW *input_win = newwin(3, COLS, LINES - 3, 0); // Create input window
    box(input_win, 0, 0); // Draw border around input window
    

    mvprintw(0, 0, "Type something (Backspace to delete, Enter to submit):");
    refresh(); // Refresh main screen

    mvwprintw(input_win, 1, 1, "%s", input); // Display input buffer
    wrefresh(input_win);

    while (1) {
        int ch = getch(); // Capture user input

        if (ch == '\n') { // Enter key submits input
            break;
        } else if ((ch == KEY_BACKSPACE || ch == 127) && pos > 0) { // Handle Backspace
            pos--; // Move cursor back
            input[pos] = '\0'; // Remove last character

            // Clear and redraw input window
            werase(input_win);
            box(input_win, 0, 0);
            mvwprintw(input_win, 1, 1, "%s", input); // Redraw input text
            wrefresh(input_win);
        } else if (pos < MAX_INPUT - 1 && ch >= 32 && ch <= 126) { // Handle normal characters
            input[pos++] = ch; // Append character
            input[pos] = '\0'; // Null-terminate string

            mvwprintw(input_win, 1, 1, "%s", input); // Update displayed text
            wrefresh(input_win);
        }
    }

    // Final output after exiting input
    clear();
    mvprintw(0, 0, "You entered: %s", input);
    refresh();
    getch(); // Wait for key press before exiting

    endwin(); // Close ncurses mode
    return 0;
}
