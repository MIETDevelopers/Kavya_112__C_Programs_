//  Author Name : Kavya Dhar
// Creation date: 18-03-21
// Purpose:To Check whether the number is Armstrong or not  
#include <stdio.h> // Pre-Prossive to include standard input and out put header files funtions
#include <math.h> //  Pre-Prossive to include standard mathematics funtions
int main()
 {     // Start Of main body
     int n1, onum, r, result = 0, n = 0 ; // Declaring Variables and initializing 
    printf("\n\n Check whether an n digits number is armstrong or not :\n"); // Printing Statement for attractive looking

    printf(" Input  an integer : ");// takimg input from user 
    scanf("%d", &n1); // 

     onum = n1;// providing n1's value to onum. 
	// While loop  started
    while (onum != 0)
    {
        onum /= 10; // Logic
        ++n; // increment with 1
    }

    onum = n1;

    while (onum != 0)
    {
        r = onum % 10; // Logic
        result += pow(r, n); // Logic 
        onum /= 10;
    }

    if(result == n1)
        printf(" %d is an Armstrong number.\n\n", n1); // printing output if it is true
    else
        printf(" %d is not an Armstrong number.\n\n", n1); // Print this statemnt if it is false 

    return 0;
}

} // End of body 
