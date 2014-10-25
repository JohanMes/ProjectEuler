#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 6857
int main() {
	__int64 testval = 600851475143;
	for(__int64 i = 3;i <= sqrt(testval);i+=2) {
		if(testval%i == 0) {
			printf("factor of %I64d is %I64d...",testval,i);
			
			bool isprime = true;
			
			// Now check if this is a prime itself
			for(__int64 j = 3;j < sqrt(i);j++) {
				if(i%j == 0) {
					isprime = false;
					break;
				}
			}
			if(isprime) {
				printf(" and is prime!\n");
			} else {
				printf(" but isn't prime!\n");
			}
		}
	}
	system("pause");
	return 0;
}
