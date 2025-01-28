#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "colors.h"

void err() {
  printf(HRED "error" reset HBLU " %d " reset ": " HRED "%s" reset "\n", errno,
         strerror(errno));
  exit(errno);
}