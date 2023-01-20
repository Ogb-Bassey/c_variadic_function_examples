#include <stdarg.h>
#include <stdio.h>

int sum(int first, ...) {
  va_list args;
  va_start(args, first);

  int sum = first;
  int val = first;
  while ((val = va_arg(args, int)) != 0) {
    sum += val;
  }

  va_end(args);
  return sum;
}

int main(void) {
  printf("Sum: %d\n", sum(1, 2, 3, 4, 0));  // prints "Sum: 10"
  printf("Sum: %d\n", sum(10, 9, 11, 0));  // prints "Sum: 30"
}
