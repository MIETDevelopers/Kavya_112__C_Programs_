#include<stdio.h>
int main()
{
int a,i;
int arr[10];
printf("ENter SIZE of  array = ");
scanf("%d",&a);

	for(i=0;i<a;i++)
{
	printf("Enter number\n",i+1);
	scanf("%d",&arr[i]);
}

 for(i=1;i<a;i++)
 {
 	if(arr[0]<arr[i]){
 		arr[0]=arr[i];
	 }
 }
 printf("Maximum elemnt  = %d",arr[0]);
 return 0;
}

 

