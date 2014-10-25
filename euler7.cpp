#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int counter = 1; // 2 is a prime by definition too, so add 1
	for(int i = 3;i < 0xFFFFFFFF;i+=2) {
		bool isprime = true;
		for(int j = 3;j <= sqrt(i);j+=2) {
			if(i % j == 0) {
				isprime = false;
				break;
			}
		}
		if(isprime) {
			if(counter++ == 10001) {
				printf("10001st prime: %d\n",i);
				break; // 104743
			}
		}
	}
	system("pause");
	return 0;
}
