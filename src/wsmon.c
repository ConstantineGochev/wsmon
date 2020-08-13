#include <stdio.h>
#include <ctype.h>
#include "dbg.h"

int lowercase (const char *msg) {
  int i = 0;
  for(; msg[i] != '\0'; i++) {
      printf("%c", tolower(msg[i]);
  }
  printf("\n");

  return 0;
}

int fail_on_purpose(const char *msg) { 
    return 1;
}
