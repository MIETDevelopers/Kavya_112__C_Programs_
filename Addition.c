#include <stdio.h> // Preprocessive to include standard input and output 
int main() { // Main Body   

    int num1, num2, sum; // Declaring Variable
    
    printf("Enter two integers: "); // taking input 
    scanf("%d %d", &num1, &num2); // Scaning output

    // calculating sum
    sum = num1 + num2;    // Logic  
    
    printf("%d + %d = %d", num1, num2, sum); // Priniting output
    return 0;
}     // End of Body
