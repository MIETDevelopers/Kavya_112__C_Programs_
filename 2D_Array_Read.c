// Author:  Kavya Dhar
//Purpose: Array with 10 integer elements initialization and printing their value.
//Date:26-03-21
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function
int main() {

    int numbers[10]; //declaration of an array.

    //for loop to insert values to the array.
    for(int i=0;i<10;i++) {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&numbers[i]);
    }

    //for loop to print the entire array.
    for(int i=0;i<10;i++) {
        printf("\nElement no. %d is: %d",i+1,numbers[i]);
    }

	return 0;	//return statement
}
//End of the main body function 
