//it is usefull to add these definitions to make your code more readible

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <colors.h>

#define READ 0
#define WRITE 1
int main() {
  int fds[2];
  pipe( fds );
  char line[100];

  int f = fork();
  if (f == 0) {
    printf("PID");
    close( fds[READ] ); //it is a good idea to close the end of the pipe your are not using.
    write( fds[WRITE], "hello!", 7);
  }
  else {
    close( fds[WRITE] );
    read( fds[READ], line, sizeof(line) );
  }
}