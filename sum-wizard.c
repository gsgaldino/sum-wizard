#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Welcome to sum wizzard!\n");
  printf("Please input a number:\n");

  float num1;
  scanf("%f", &num1);

  printf("Now input another number:\n");

  float num2;
  scanf("%f", &num2);

  float result = num1 + num2;

  printf("The sum is: %f\n", result);
  return 0;
};
