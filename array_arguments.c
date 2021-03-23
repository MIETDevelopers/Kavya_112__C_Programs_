// Author : Kavya Dhar
// Creation Date : 23-03-21 
//  Purpose: 1D and 2D arrays passed as arguments to a single function and the function implementation should simply print those arrays passed as arguments.
#include <stdio.h>
void displayNumbers(int num[2][2]);
int main()
{
    int num[2][2],i,j;
    printf("Enter 4 numbers:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);

    // passing multi-dimensional array to a function
    displayNumbers(num);
    return 0;
}

void displayNumbers(int num[2][2])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           printf("%d\n", num[i][j]);
        }
    }
}
