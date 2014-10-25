#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 1;
	for(int i = 1;i <= 20;i++) {
		sum += i*i;
		printf("%dx%d = %d\n",i,i,sum);
	}
	system("pause");
	return 0;
}
