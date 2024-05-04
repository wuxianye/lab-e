#include <stdio.h>
int main(int argc, char* argv[])
{
	// Enter your code under here to read the filename from the command line
	if (argc != 2) {
		printf("Error.Expected 1 filename.");
		return 1; 
	}
	// Read number from file - do not edit
	double num;
	FILE* fptr;
	fptr = fopen(argv[1], "r");
	fscanf(fptr, "%lf", &num);
	fclose(fptr);

	// Enter your code from Lab D to print Json output (with name, email, number1, number2) goes under here
	
	char* name = "xianye wu";
	char* email = "xianye.wu.@student.manchester.ac.uk";

	// Output JSON formatted text
	printf("{\"name\":\"%s\",\"email\":\"%s\",\"number1\":%.2f,\"number2\":%.3e}\n", name, email, num, num);
	
	// Do not edit below here


	return 0;
}