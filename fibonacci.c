#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {

	if (n == 1) return 1;

	return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char* argv[]) {

	if (argc < 2) {
		printf("Usage: %s N\n", argv[0]);
		return 1;
	}

	int input = atoi(argv[1]);

	printf("The Nth Fibonacci number is %d\n", fibonacci(input));

	return 0;

}
