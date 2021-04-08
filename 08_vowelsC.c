// Author : Kavya Dhar
// Creation Date:22-03-21
// Purpose:To Check the alphabet is vowel or consonant
#include <stdio.h>
#include<conio.h>
int main()
 {
    char v;
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
	
