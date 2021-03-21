// Author : Kavya Dhar
  // Creation Date: 21-03-2021
    // Call by Value Example - Swapping 2 numbers using Call by Value
#include <stdio.h>
void swap(int , int ); //  variable to pass by reference (which is the the address of an integer variable)
 
int main() // Main Body 
{
   int x, y;// Variable Declration 
 
   printf("Enter the value of x and y\n"); // Input from user
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y); // Before Swapping 
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", y, x); // After Swapping 
 
   return 0;
}
 
void swap(int a, int b) // variable to pass by reference
{
   int temp; // Variable Declaration 
 
   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b); // Printing Statement 
}
