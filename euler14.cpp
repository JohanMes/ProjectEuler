#include <stdio.h>
#include <stdlib.h>

unsigned int sequence(unsigned int val,unsigned int i) {
	if(val == 1) {
		return i;
	} else if(val % 2 == 0) {
		return sequence(val/2,++i);
	} else {
		return sequence(3*val + 1,++i);
	}
}

int main() {
	unsigned int maxterms = 0;
	unsigned int maxi = 0;
	for(unsigned int i = 3;i < 1000000;i+=2) {
		unsigned int numterms = sequence(i,1);
		if(numterms > maxterms) {
			maxterms = numterms;
			maxi = i;
		}
	}
	printf("%d\n",maxi);
	system("pause");
	return 0;
}
