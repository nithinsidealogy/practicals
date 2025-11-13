// increment decrement operators
#include <stdio.h>
#include<conio.h>
void main( )
{
 int a, b;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 printf("Using Increment Operator\n");
 printf("************************\n");
 printf("Initial value of a: %d\n", a);
 printf("Post-increment of a: %d\n", a++);
 printf("Value of a after post-increment: %d\n", a);
 printf("Pre-increment of a: %d\n", ++a);
 printf("\nUsing Decrement Operator\n");
 printf("************************\n");
 printf("Initial value of b: %d\n", b);
 printf("Post-decrement of b: %d\n", b--);
 printf("Value of b after post-decrement: %d\n", b);
 printf("Pre-decrement of b: %d\n", --b);
 getch( );
}



// bitwise operator 
#include <stdio.h>
#include<conio.h>
int main( )
{
 unsigned int a, b;
 printf("Enter 2 numbers:");
 scanf("%d %d", &a, &b);
 printf("a & b = %u\n", a & b);
 printf("a | b = %u\n", a | b);
 printf("a ^ b = %u\n", a ^ b);
 printf("~a = %u\n", ~a);
 printf("b << 1 = %u\n", b << 1);
 printf("b >> 1 = %u\n", b >> 1);
 getch( );
}


//conditional statements
#include <stdio.h>
#include<conio.h>
void main( )
{
 int number;
 printf("Enter an integer: ");
 scanf("%d", &number);
 // Using if statement
 if (number > 0)
 {
 printf("%d is a positive number.\n", number);
 }
 // Using if-else statement
 if (number % 2 == 0)
 {
 printf("%d is an even number.\n", number);
 }
 else
 {
 printf("%d is an odd number.\n", number);
 }
 // Using if-else-if ladder
 if (number > 0)
 {
 printf("%d is positive.\n", number);
 }
 else if (number < 0)
 {
 printf("%d is negative.\n", number);
 }
 else
 {
 printf("%d is zero.\n", number);
 }
 getch( );
}
