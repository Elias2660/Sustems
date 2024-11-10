#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(int argc, char* argv[]) {
  char buffer[256];
  if (strcmp(argv[1], "user") == 0) {
    int i1, i2, i3;
    fgets(buffer, 255, stdin);
    sscanf(buffer, "%d %d %d", &i1, &i2, &i3);
    if (i1 + i2 >= i3 && i1 + i3 >= i2 && i2 + i3 >= i1) {
      printf("valid!!!\n");
    } else {
      printf("invalid\n");
    }
  } else if (strcmp(argv[1], "horizontal") == 0) {
    int i1, i2, i3, counter = 0;
    
    while (fgets(buffer, 255, stdin)) {
      sscanf(buffer, "%d %d %d", &i1, &i2, &i3);
      if (i1 + i2 >= i3 && i1 + i3 >= i2 && i2 + i3 >= i1) {
        counter++;
      }
    }
    printf("counter: %d\n", counter);
  } else {
    printf(
        "Invalid! Please use with command line input 'user' or 'horizontal'");
  }
}