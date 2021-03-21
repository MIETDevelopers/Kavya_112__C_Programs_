#include<stdio.h>  // Pre-Prossive to include standard input and out put header files funtions
 int main()    
{    // Start Of mail body
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    // Loop started 
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    // Loop ended 
printf("Sum is=%d",sum);   // Printing Sum of Digits 
return 0;  
}   
