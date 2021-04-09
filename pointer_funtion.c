// AUTHOR : KAVYA DHAR
// Creation Date:22-03-21
// Purpose:Pointer function
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function

int* returnPointer();

int main() {
    int *ptr = returnPointer();
    printf("%d",ptr);
    return 0;   //return statement
}
int* returnPointer() {
    int *pointer;  // Pointer Variable 
    int number = 717;

    pointer = &number; //pointer = address of number variable.
    return pointer; //this statement returns a pointer.
}
