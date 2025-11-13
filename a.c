//1-d array with pointers 
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


//2-d array without pointers
#include <stdio.h>
#include<string.h>
#include<conio.h>
void main( )
{
 char names[n][100], temp[100];
 int n;
 printf("Enter number of names: ");
 scanf("%d", &n);
 printf("Enter names:\n");
 for (int i = 0; i < n; i++)
 {
 scanf("%s", names[i]);
 }
 // Sorting names using bubble sort
 for (int i = 0; i < n - 1; i++)
 {
 for (int j = i + 1; j < n; j++)
 {
 if (strcmp(names[i], names[j]) > 0)
 {
 strcpy(temp, names[i]);
 strcpy(names[i], names[j]);
 strcpy(names[j], temp);
 }
 }
 }
 printf("Names in ascending order:\n");
 for (int i = 0; i < n; i++)
 {
 printf("%s\n", names[i]);
 }
 getch( );
}
