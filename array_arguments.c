// Author : Kavya Dhar
// Creation Date : 23-03-21 
//  Purpose: 1D and 2D arrays passed as arguments to a single function and the function implementation should simply print those arrays passed as arguments.
/Purpose: Passing arrays as arguments to a function.
#include<stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function
void printArrays(int arr1[],int arr2[][3] );
int main() {
 int a,b,i,j;
    int _1Array[5]; //declaring a 2D array with 2 rows and 3 columns.
    int _2Array[2][3]; //declaring a 2D array with 2 rows and 3 columns.
	printf("Enter values for 1st Array\n");
    for(i=0;i<5;i++) {  //This for loop determines the value of rows.
            printf("Index [%d]: ",i);
            scanf("%d",&_1Array[i]);
        }
    printf("\nEnter values for 2nd Array\n");
    for( i=0;i<2;i++) {  //This for loop determines the value of rows.
        for( j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("Index [%d] [%d]: ",i,j);
            scanf("%d",&_2Array[i][j]);
        }
    }
    printArrays(_1Array,_2Array);
	return 0;	//return statement
}
//End of the main body function
int i,j;
void printArrays(int arr1[],int arr2[][3]) {
	//1st array.
    printf("\nPrinting 1st array\n");
    for( i=0;i<5;i++) {  //This for loop determines the value of rows.
            printf("%d ",arr1[i]);
        }
    //2nd array.
    printf("\nPrinting 2nd array\n");
    for( i=0;i<2;i++) {  //This for loop determines the value of rows.
        for( j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("%d ",arr2[i][j]);
            if(j==2)
                printf("\n");
        }
    }
}
