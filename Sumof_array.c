// Author : Kavya Dhar
//  Creation Date: 22-03-21
//  Purpose: sum of elements of an array with 10 integer elements. 
//Purpose: Sum of an array with 10 elements.
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function
int main() {

   int sum=0; // Variable declaratation

    int numbers[10]; //declaration of an array.

    //for loop to insert values to the array.
    for(int i=0;i<10;i++) {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&numbers[i]);
    }

    //for loop to print the entire array.
    for(int i=0;i<10;i++) {
        sum = sum + numbers[i];
    }
    printf("\nSum of all elements = %d",sum);

	return 0;	//return statement
}
//End of the main body function
