/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2;

  printf("Enter subject 1 marks : ");
  scanf("%d", &mark1);

  printf("Enter subject 2 marks : ");
  scanf("%d", &mark2);

  printf("\nAverage of the marks : %.2f", (mark1+mark2)/2.0);
  
  return 0;
}

