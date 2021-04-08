// A C Program to check whether the entered number is Odd or Even.
#include <stdio.h>  //Including standard input ouput header files from library.
int main() { 
    // Start of main body 
    int num; // Variable Declaratation
    printf("Enter an integer: "); // Take Input from user
    scanf("%d", &num); //It will scan the numbers entered by user.
    if(num % 2 == 0)
        printf("%d is even.", num); // Printing Statement
    else
        printf("%d is odd.", num); // Printing Statement
    return 0;
}
//  end of body 
