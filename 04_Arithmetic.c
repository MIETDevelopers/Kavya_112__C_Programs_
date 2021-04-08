#include<stdio.h>    // Pre-Prossive to include standard input and out put header files funtions
#include<conio.h>    // Pre-Prossive to include console  input and out put header files funtions
int main()
// Start of main body
{
    int a,b; // Variable Declaratation
    int op; //  Variable Declaratation
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n"); // Printing Statement
    printf("Enter the values of a & b: "); // Taking Input from user
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : "); // Choice from User
    scanf("%d",&op); // 
    switch(op)
    {
    case 1	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}
// End of Body
