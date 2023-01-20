#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

int sum(int num_args, ...) {
  va_list args;
  va_start(args, num_args); // Initialize the argument list

  int sum = 0;
  for (int i = 0; i < num_args; i++) {
    sum += va_arg(args, int); // retrieve the next argument from the list
  }

  va_end(args); //clean up the va_list object
  return sum;
}

int main(void) {
  printf("Sum: %d\n", sum(4, 1, 2, 3, 4));  // prints "Sum: 10"
  printf("Sum: %d\n", sum(3, 10, 9, 11));  // prints "Sum: 30"
}
