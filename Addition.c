#include <stdio.h> // Preprocessive to include standard input and output 
int main() {    

    int num1, num2, sum;
    
    printf("Enter two integers: "); // taking input 
    scanf("%d %d", &num1, &num2); // Scaning output

    // calculating sum
    sum = num1 + num2;      
    
    printf("%d + %d = %d", num1, num2, sum); // Priniting output
    return 0;
}
