#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

bool IsPalinDromic(int val) {
	char text[30] = "";
	sprintf(text,"%d",val);
	int len = strlen(text);
	for(int i = 0;i <= 0.5f*strlen(text);i++) {
		if(text[i] != text[len-i-1]) {
			return false;
		}
	}
	return true;
}

int main() {
	for(int i = 1;i < 1000000;i++) {
		
		// The factors should be less than 1000...
		bool canfactorbelow1000 = false;
		for(int j = 3;j <= 1000;j++) {
			if(i % j == 0) {
				
				// Found a factor, check for both < 1000
				if(j < 1000 and i/j < 1000) {
					canfactorbelow1000 = true;
					break;
				}
			}
		}
		if(canfactorbelow1000) {
			if(IsPalinDromic(i)) {
				printf("Palindromic: %d\n",i); // 906609
			}
		}
	}
	system("pause");
	return 0;
}
