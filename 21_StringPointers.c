//A C Program to read the string in pointers loaction and give it as output.(Pre-Defined) 		Kavya Dhar 19/March/2021
#include <stdio.h>

int main(void) {
  char name[] = "Kavya Dhar";

  printf("%c \n", *name);     	// Output will be K
  printf("%c \n", *(name+3));	// Output will be y
  printf("%c \n", *(name+8));   // Output will be a

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     // Output will be K
  printf("%c \n", *(namePtr+2)); // Output will be V
  printf("%c \n", *(namePtr+7)); // Output will be h
}
