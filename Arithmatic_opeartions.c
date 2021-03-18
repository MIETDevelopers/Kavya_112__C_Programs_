/* WAP To Make Simple Calculator which performs certian Actions like +,-,*,/,% */
#include <stdio.h> // Preprocessive to include standard input and output header funtions 
 
int main() // Start of Main body 
{
    int num1,num2; // Variable Declaration 
    float result; // Variable Declaration 
    char var;    //to store operator choice
     
    printf("Enter first number: "); // Taking 1st  Input 
    scanf("%d",&num1); 
    printf("Enter second number: "); // Taking 2nd Input
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%): "); // Choose the opeartion 
    scanf(" %c",&var);
     
    result=0; // Null value provoided 
    switch(var)     // Switch case 
    {
        case '+':       // 1st  CAse 
            result=num1+num2; // LOGIC 
            break; // Break statment 
             
        case '-':        // 2nd  CAse 
            result=num1-num2;   // LOGIC 
            break;   // Break statment 
         
        case '*': //  3rd CASE 
            result=num1*num2; // LOGIC
            break; 
             
        case '/': // CASE 4th 
            result=(float)num1/(float)num2;// Logic
            break; 
             
        case '%':
            result=num1%num2;
            break;
        default:   // Deafult CAse 
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",num1,var,num2,result); // Printing statment 
    return 0; // returning 0 
}
// End of body 
