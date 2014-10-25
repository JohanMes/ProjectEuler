#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	__int64 sum = 0;
	for(int i = 2;i < 2000000;i++) {
		bool isprime = true;
		for(int j = 2;j <=sqrt(i);j++) {
			if(i % j == 0) {
				isprime = false;
				break;
			}
		}
		if(isprime) {
			sum += i;
		}
	}
	printf("sum = %I64d\n",sum);
	system("pause");
	return 0;
}
