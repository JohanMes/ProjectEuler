#include <stdio.h>
#include <stdlib.h>

bool EvenlyDivisible(int testval,int lim) {
	for(int i = 2;i <= lim;i++) {
		if(testval % i != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	for(int i = 20;i < 0xFFFFFFFF;i+=2) {
		if(EvenlyDivisible(i,20)) {
			printf("%d!\n",i); // 232792560
			break;
		}
	}
	system("pause");
	return 0;
}
