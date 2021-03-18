#include<stdio.h>
int main()
{
int i;
float arr[5];

printf("Please enter five numbers:\n ");

for (i = 0; i < 5; ++i)
{

    scanf_s("%f", &arr[i]);
}

for (i = 1; i < 5; ++i)
{
    if (arr[0] < arr[i])
        arr[0] = arr[i];
}
printf("Largest element = %.2f", arr[0]);

return 0;
}
