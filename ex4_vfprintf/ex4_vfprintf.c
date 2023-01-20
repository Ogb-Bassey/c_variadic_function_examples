#include <stdarg.h>
#include <stdio.h>

void print_message(FILE* stream, const char* format, ...) {
  va_list args;
  va_start(args, format);

  vfprintf(stream, format, args);

  va_end(args);
}

int main(void) {
  print_message(stderr, "Error %d: %s\n", 1, "invalid input");  // prints "Error 1: invalid input" to stderr
  print_message(stderr, "Error %d: %s\n", 2, "unable to execute the command");  // prints "Error 2: unable to execute the command" to stderr
}
