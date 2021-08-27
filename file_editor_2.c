#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float value;
	FILE *infile , *outfile;
	
	infile = fopen("program.txt", "r");
	outfile = fopen ("programout.txt", "t");
	
	if(infile != NULL)
		printf("imput file found\n");
	else
		printf("Error, file not found\n");
	
	fscanf(infile, "%f", &value);
	printf("value read was %.2f\n", value);

	//add tax
	value *= 1.06;
	printf("value after tax is %.2f\n", value);
	
	fprintf(outfile, "%f", value);
	return 0;
}




