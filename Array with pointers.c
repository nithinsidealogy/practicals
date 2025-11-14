#include <stdio.h>
#include<conio.h>
void main( ) 
{
 int n, i;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n]; // Declare an array of size n
 int *ptr = arr; // Pointer to the array
 // Input elements into the array using pointer
 for(i = 0; i < n; i++) 
 {
 printf("Enter element %d: ", i + 1);
 scanf("%d", ptr + i);
 }
 // Print the elements of the array using pointer
printf("Array elements are: ");
 for(i = 0; i < n; i++) 
 {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 getch( );
}

