#include <stdio.h>

//Use this file to talk about
// listings?
// watches, definitely

int main(void) {

	int grade = 95;
	char letter;

	if (grade >= 90) {
		letter = 'A';
	}
	else if (grade >= 80) {

		letter = 'B';
	}
	else if (grade >= 70) {
		letter = 'C';
	}
	if (grade >= 60) {
		letter = 'D';
	}
	else {
		letter = 'F';
	}

	printf("Your grade is %d (%c)\n", grade, letter);

	return 0;

}
