// Author:Kavya Dhar
// Creation date: 22-03-21
// Purpose: C program to read name and marks of n number of students from user and store them in a file
#include <stdio.h>
#include<stlib.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("C:\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}
