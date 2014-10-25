#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int triangle = 0;
	int numdivs = 0;
	for(unsigned int i = 1;i < 0xFFFFFFFF;i++) {
		triangle += i;
		
		// Now check for 500+ divisors
		numdivs = 2; // 1 and triangle itself, not valid for triangle=1
		for(int j = 2;j <= sqrt(triangle);j++) {
			if(triangle % j == 0) {
				numdivs+=2;
			}
			if(numdivs > 500) {
				printf("%d has >500 divisors\n",triangle);
				break;
			}
		}
		if(numdivs > 500) {
			break;
		}
	}
	system("pause");
	return 0;
}
