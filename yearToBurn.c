#include <stdio.h>

int main()
{
	const long int sec = 288230376151711744; // 2 ** 58
	const float min = sec / 60;
	const float houre = min / 60;
	float day = houre / 24;
	int year, log = 0;
	
	while (day > 0) {
		log++;
		if (log == 4) {
			log = 0;
			day -= 366; // високосный год
		}
		day -= 365;
		year++;
		printf("%d\t", year);
	}
}
