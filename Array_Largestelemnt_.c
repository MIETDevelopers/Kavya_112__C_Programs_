#include<stdio.h> //  preprocessor to include standard input and output header files funtions
int main() // Main Body 
{
int i; // Variable declaration
float arr[5]; // Declaring Array of size 5 with float data type 

printf("Please enter five numbers:\n "); // Taking input 

for (i = 0; i < 5; ++i)
{

    scanf_s("%f", &arr[i]);
}

for (i = 1; i < 5; ++i)
{
    if (arr[0] < arr[i])
        arr[0] = arr[i];
}
printf("Largest element = %.2f", arr[0]); //  Output statment  

return 0;
} // End of Body 
