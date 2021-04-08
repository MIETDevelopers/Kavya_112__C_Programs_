//A C Program to check whether the alphabet is Vowel or Consonant.               
//The letters A, E, I, O and U are called vowels & the remaining ones are calles consonants.
#include <stdio.h> // Pre-Processive to include standard input and output header files funtions
#include<conio.h>  //   Pre-Processive to include console input and output header files funtions
int main()
 {
    char v; // Variable Delrartation
    printf("Enter an alphabet: ");
    scanf("%c", &v);

    // evaluates to 1 if variable c is a  vowel
    switch(v)
	
{
	case 'a':
		printf("Yes its a vowel","\n",v);
		break;
	case 'e':
		printf("Yes its a vowel","\n",v);
		break;
	case 'i':
		printf("yes its a vowel","\n",v);
		break;
	case 'o':
		printf("Yes its a vowel","\n",v);
				break;
	case 'u':
		printf("Yes its a vowel","\n",v);				
		 break;
	case 'A':
		printf("Yes its a vowel","\n",v);
		break;
	case 'E':
		printf("Yes its a vowel","\n",v);
		break;
	case 'I':
		printf("yes its a vowel","\n",v);
		break;
	case 'O':
		printf("Yes its a vowel","\n",v);
				break;
	case 'U':
		printf("Yes its a vowel","\n",v);				
		 break;
	default :
		printf("Oops Its Constant","\n",v)	; 
	}
}
	// End of Body 
