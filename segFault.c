#include <stdio.h>

//Solely for showing that GDB shows you the line where
// your segmentation fault happened

int main(void) {


	int primeNumbers[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

	int thisWillFail = primeNumbers[1000000];
	printf("The 1,000,000th prime number is %d\n", thisWillFail);

}
