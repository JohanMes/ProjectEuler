#include <stdio.h>
#include <stdlib.h>

int main() {
	int evensum = 0; // 4613732

	// Loop
	int a = 1;
	int b = 2;
	int temp = 0;
	while(a < 4000000) {
		if(a % 2 == 0) {
			evensum+=a;
		}
		temp = b;
		b = b + a;
		a = temp;
	}
	printf("Even sum of fibonacci numbers: %d\n",evensum);
	system("pause");
	return 0;
}
