#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0; // 233168
	for(int i = 1;i < 1000;i++) {
		if(i%3 == 0 or i%5 == 0) {
			sum += i;
		}
	}
	printf("Sum of all multiples of 3 or 5 below 1000 is: %d\n",sum);
	system("pause");
	return 0;
}
