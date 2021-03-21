/  Author Name : Kavya Dhar
// Creation date: 21-03-21
// Purpose: Multiplication of 2D array  
#include<stdio.h>  //Preprocessor directive to include standard input output header file 
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;      // Variable Declaration 
printf("enter the number of row=");     // Taking input as row
scanf("%d",&r);    
printf("enter the number of column=");    // Taking input as column 
scanf("%d",&c);    
printf("enter the first matrix element=\n");     // Taking 1st Matrix elements
for(i=0;i<r;i++)    
{    
	for(j=0;j<c;j++)    
{    
		scanf("%d",&a[i][j]);    
}    
}    
	printf("enter the second matrix element=\n");    // taking 2nd Matrix elements
	for(i=0;i<r;i++)    
	{    
			for(j=0;j<c;j++)    
{    
			scanf("%d",&b[i][j]);    
}    
}    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{   
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("multiply of the matrix=\n");    // Priniting MAtrix C as result
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
