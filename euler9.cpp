#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	for(int a = 1;a < 999;a++) {
		
		// For every a, try a larger b...
		for(int b = a+1;b < 999;b++) {
			
			// Then check if a^2 + b^2 matches a squared real num
			int csquare = a*a + b*b;

			// Then find an int root
			for(int i = 1;i <=sqrt(csquare);i++) {
				if(csquare % i == 0 and csquare/i == i) {
					if(a+b+i == 1000) {
						printf("abc = %d\n",a*b*i);
					}	
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}
