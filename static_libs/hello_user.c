#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[1024];
const char * greeting(char *name) {
  strcat(str, "Hello ");
  strcat(str, name);
  strcat(str, "! How are you?");

  return str;
}
