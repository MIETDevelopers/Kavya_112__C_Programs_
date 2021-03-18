#include <stdio.h>  // Pre-Prossive to include standard input and out put header files funtions
int main()
 {     // Start Of mail body
    int num, ON, re, result = 0; //  Variable Declaration
    printf("Enter a three-digit integer: "); // taking input 
    scanf("%d", &num); // processing input 
    ON = num; // logic 

    while (ON != 0) // loop started 
	{          // loop body 
       // remainder contains the last digit
        re = ON % 10;
        
       result += re * re * re;
        
       // removing last digit from the orignal number
       ON /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num); // Print  this Statement if true
    else
        printf("%d is not an Armstrong number.", num); // Print  this Statement if false 

    return 0;
} // End of body 
