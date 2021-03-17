#include <stdio.h>
int main()
{
   int a, i, c=0;
 	printf("Enter number to check prime number or not");
    scanf("%d",&a);
    i=2;
    while( i<=a/2)
    {
        // check for non prime number
        if(a%i==0)
        {
            c=1;
            break;
        }
        i++;
    }
 
    if (c==0)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);
 
    return 0;
    
}
 

