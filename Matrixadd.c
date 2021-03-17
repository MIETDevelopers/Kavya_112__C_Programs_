#include<stdio.h>
int main()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	printf("Enter any Nine Numbers for 1st Matrix");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
		scanf("%d",A[3][3]);
	printf("Enter any nine numbers fr 2nd Matrix ");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
		scanf("%d",B[3][3]);
		
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		C[i][j]=A[i][j]+B[i][j];
		printf("%d ",C[i][j]);
	}
}
	printf("\n");

return 0;
}
