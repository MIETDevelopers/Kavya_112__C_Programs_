// Author:Kavya Dhar
// Creation date:22-03-21
// C program for the Read and write in comma separated file (CSV)
#include <conio.h> // 
#include <stdio.h>
#include <string.h>

// Driver Code
int main()
{
	// Substitute the file_path string
	// with full path of CSV file
	FILE* fp = fopen("file_path", "a+");

	char name[50];
	int accountno, amount;

	if (!fp) {
		// Error in file opening
		printf("Can't open file\n");
		return 0;
	}

	// Asking user input for the
	// new record to be added
	printf("\nEnter Account Holder Name\n");
	scanf("%s", &name);
	printf("\nEnter Account Number\n");
	scanf("%d", &accountno);
	printf("\nEnter Available Amount\n");
	scanf("%d", &amount);

	// Saving data in file
	fprintf(fp, "%s, %d, %d\n", name,
			accountno, amount);

	printf("\nNew Account added to record");

	fclose(fp);
	return 0;
}


