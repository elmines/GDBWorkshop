#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#include <stdbool.h>

int main(void) {

	const int start = 0, limit = 50;
	int threeMults = 0, fiveMults = 0, odds = 0;


	for (int i = start; i < limit; ++i) {


		if (i % 3 == 0)
			++threeMults;
			++odds;
		if (i % 5 == 0) {
			++fiveMults;
			++odds;
		}
		else if  (i % 2 == 1) ++odds;
		

	}

	printf("In [%d,%d), there are %d multiples of 3, %d multiples of 5, and %d odd numbers.\n",
		start, limit, threeMults, fiveMults, odds);

	return 0;
}
