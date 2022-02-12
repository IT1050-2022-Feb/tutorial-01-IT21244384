/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int a , b ;
  float c ;
   printf("Marks1 : ");
      scanf("%d" , &a);
   printf("Marks2 : ");
      scanf("%d" , &b);
   c=(a+b)/2.0;
   
   printf("Average is = %f" , c);
  return 0;
}

