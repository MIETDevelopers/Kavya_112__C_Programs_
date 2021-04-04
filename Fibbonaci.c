#include <stdio.h> // Pre-Processive directory standard library to include input and output 
int main() { //  Start of Main body
    int i, n, t1 = 0, t2 = 1, nextTerm;     // Variable Declaration  
    printf("Enter the number of terms: "); //Printing the number of terms
    scanf("%d", &n); 
    printf("Fibonacci Series: "); // Printing Fibonacci Series

    for (i = 1; i <= n; ++i) { // Begining of for loop
        printf("%d, ", t1); 
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0; // End of Body 
}
