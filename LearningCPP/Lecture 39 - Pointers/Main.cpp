#include <iostream>
#include <string.h>

int main() {

	// INTEGER
	int iValue = 66;	// Integer value
	int *ip = NULL;		// Pointer to an integer
	ip = &iValue;		// Make the pointer equal the memory location
	printf("Integer Value: %d \t\tInteger Location: %p \tValue by pointer: %d\n", iValue, ip, *ip);

	// DOUBLE
	double dValue = 13.364321;	// Double value
	double *dp = NULL;			// Pointer to a double
	dp = &dValue;				// Make the pointer equal to the memory location
	printf("Double Value: %f \tDouble Location: %p \tValue by pointer: %f\n", dValue, dp, *dp);

	// FLOATING POINT
	float fValue = 9.65f;	// Float value
	float *fp = NULL;		// Pointer to a floating point
	fp = &fValue;			// Make the pointer equal to the memory location
	printf("Float Value: %f \t\tFloat Location: %p \tValue by pointer: %f\n", fValue, fp, *fp);

	// CHARACTER
	char cValue = 'z';	// Char value
	char *cp = NULL;	// Pointer to a char value
	cp = &cValue;		// Make the pointer equal to the memory location
	printf("Char Value: %c \t\t\tChar Location: %p \tValue by pointer: %c\n\n\n", cValue, cp, *cp);

	// STRING
	char caValue[] = "Blake"; 
	char *cap = NULL;
	for (int i = 0; i < (sizeof(caValue)/sizeof(char)) - 1; i++) {
		cap = &caValue[i];
		printf("Char Array Value: %c \t\Char Array Location: %p \tValue by pointer: %c\n", caValue[i], cap, *cap);
	}
	system("pause");
	return 0;
}