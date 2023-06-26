#include <stdio.h>

int main(void) {
  double first = 3.31e-8;
  double second = 2.01e-7;
  double third = 7.16e-6;
  double fourth = 2.01e-8;

  double result = (first * second) / (third + fourth);

  printf ("(%e * %e) / (%e + %e) = %e", first, second, third, fourth, result);
  
  return 0;
}