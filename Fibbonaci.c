//  Author Name : Kavya Dhar
// Creation date: 18-03-21
// Purpose: To Find the Factorial of a Program 
#include<stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm; // Variable Declration 
    printf("Enter the number of terms: "); // Taking Input from user
    scanf("%d", &n);
    printf("Fibonacci Series: "); 

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2; // Logic
        t1 = t2; // Logic 
        t2 = nextTerm; // Logic
    }

    return 0;
}
