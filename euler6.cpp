#include <stdio.h>
#include <stdlib.h>

// 25164150

int main() {
	int sumofsquares = 0;
	for(int i = 1;i <= 100;i++) {
		sumofsquares += i*i;
	}
	
	int squareofsums = 0;
	for(int i = 1;i <= 100;i++) {
		squareofsums += i;
	}
	squareofsums *= squareofsums;
	
	printf("Diff = %d\n",squareofsums - sumofsquares);
	system("pause");
	return 0;
}
