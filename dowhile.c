// Program to add numbers until the user enters zero

#include <stdio.h>
int main()
{
    int number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
    }
    while(number != 0.0);

    printf("Sum = %d",sum);

    return 0;
}
