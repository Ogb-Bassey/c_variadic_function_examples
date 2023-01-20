#include <stdarg.h>
#include <stdio.h>

void print_message(const char* format, ...) {
  va_list args;
  va_start(args, format);

  vprintf(format, args);

  va_end(args);
}

int main(void) {
  print_message("Hello, %s!\n", "world");  // prints "Hello, world!"
  print_message("Welcome to %d! %s!\n", 2023, "Happy new year"); // prints "Welcome to 2023! Happy new year!"
}
