//A C Program to print factorial using recursion.	 		Kavya Dhar 20/March/2021
#include<stdio.h>
	long int multiplyNumbers(int n);
	int main() {
    	int n;
    	printf("Enter a positive integer: ");
    	scanf("%d",&n);
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    	return 0;
	}

	long int multiplyNumbers(int n) {
    	if (n>=1)
        	return n*multiplyNumbers(n-1);
    	else
        	return 1;
}
