//Author; Kavya Dhar
//Creation Date; 17/03/2021
//Purpose; WAP for printing a table and take input from user 

#include <stdio.h>  	//Standard header filre for input and output
 
int main()   //int main is a  function in which our whole code or program is writtened and executed
 {
		//Start of the  main function body
     int n,a;  // Decalred n and a varibales
     printf("Enter an integer: "); // prinitng statement
     scanf("%d", &n); 
    for (a = 1; a <= 10; a++) {
        printf("%d X  %d = %d \n", n, a, n * a);
    }
    return 0;
    // End of  main funtion body 
}
