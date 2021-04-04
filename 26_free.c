// A C Program demonstrating use of free() function.         Kavya Dhar 20/March/2021
#include <stdio.h> //Using standard input output header file.
#include <stdlib.h> //Using standard library header file.
	int main() {
	int* ptr = malloc(10 * sizeof(*ptr));
		if (ptr != NULL){
  		*(ptr + 2) = 50;
  		printf("Value of the 2nd integer is %d",*(ptr + 2));
		}
	free(ptr);
}
