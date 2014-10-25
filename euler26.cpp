#include <stdio.h>
#include <string>
using std::string;
#include <math.h>
#include <iostream>
using std::cout;

bool IsPrime(int number) {
	if(number % 2 == 0) {
		return false; // filter even numbers
	}
	for(int i = 3;i <= sqrt(number);i+=2) {
		if(number % i == 0) {
			return false;
		}
	}
	return true;
}

int FindLongestPattern(string input) {
	printf("%s\n",input.c_str());
	return 0;
}

int main() {
	for(int i = 0;i < 1000;i++) {
//		if(IsPrime(i)) {
			long double reciprocal = 1.0/(long double)i;
			cout.precision(80);
			cout << i << "\t" << std::fixed << reciprocal << "\n";
//			FindLongestPattern(buffer);
//		}
	}
	return 0;
}
