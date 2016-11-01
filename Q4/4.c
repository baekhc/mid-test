#include <stdio.h>

int main(void) {
	enum card { SPADE, HEART, DIAMOD, CLUB };
	enum card mycard = SPADE;
	printf("%d\n", mycard);

	printf("%010d\n", 0xffff);
	printf("%d010.4", 4.6183);

	double f = 56.7;
	printf("%f\n, 5.0/9*(f-32)");

	int rst, age = 15;
	rst = age >= 13 && age < 18;
	printf("%d\n", rst);

	return 0;
}