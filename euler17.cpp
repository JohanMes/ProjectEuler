#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengths10[] =
{
	4, // zero
	3, // ten
	6, // twenty
	6, // thirty
	5, // forty
	5, // fifty
	5, // sixty
	7, // seventy
	6, // eighty
	6, // ninety
};

int lengths1[] = 
{
	4, // zero
	3, // one
	3, // two
	5, // three
	4, // four
	4, // five
	3, // six
	5, // seven
	5, // eight
	4, // nine
	3, // ten
	6, // eleven
	6, // twelve
	8, // thirteen
	8, // fourteen
	7, // fifteen
	7, // sixteen
	9, // seventeen
	8, // eighteen
	8, // nineteen
	6, // twenty
};

int GetWordLen(int n) {
	int result = 0;
	
	// Get the digits
	int n4 = (n%10)/1;
	int n3 = (n%100 - n4)/10;
	int n2 = (n%1000 - n3 - n4)/100;
	int n1 = (n%10000 - n2 - n3 - n4)/1000;
	
	if(n1) {
		result += lengths1[n1] + strlen("thousand");
		if(n2 or n3 or n4) {
			result += strlen("and");
		}
	}
	if(n2) {
		result += lengths1[n2] + strlen("hundred");
		if(n3 or n4) {
			result += strlen("and");
		}
	}
	if(n3*10 + n4 > 20) {
		result += lengths10[n3];
		if(n4) {
			result += lengths1[n4];
		}
	} else if(n3*10 + n4 > 0){
		result += lengths1[n3*10 + n4];
	}
	return result;
}

int main() {
	int sum = 0;
	for(int i = 1;i <= 1000;i++) {
		printf("%d\t= %d\n",i,GetWordLen(i));
		sum += GetWordLen(i);
	}
	printf("amount\t= %d\n\n",sum);
	system("pause");
	return 0;
}
