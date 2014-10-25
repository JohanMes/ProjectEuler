#include <cmath>
#include <stdio.h>
#include <windows.h>

typedef __int64 int64;

// clock stuff
int64 clockfrequency = 0;

void CalibrateClock() {
	QueryPerformanceFrequency((LARGE_INTEGER*)&clockfrequency);
}

int64 GetTime() {
	int64 result = 0;
	QueryPerformanceCounter((LARGE_INTEGER*)&result);
	return result;
}

double GetTimeDiff(int64 time1, int64 time2) {
	return (time2 - time1)/(double)clockfrequency;
}

int GetDigit(int maxtotal) {
	int totaldigits = 0;
	for(int x = 1;x < INT_MAX;x++) {
		totaldigits += floor(log10(x) + 1);
		if(totaldigits >= maxtotal) {
			char buffer[32];
			snprintf(buffer,32,"%d",x);
			int offset = totaldigits - (int)maxtotal + 1;
			return (int)buffer[strlen(buffer) - offset] - 48;
		}
	}
	return 0;
}

int main() {
	CalibrateClock();
	int64 timebefore = GetTime();
	int result = GetDigit(1e0) * GetDigit(1e1) * GetDigit(1e2) * GetDigit(1e3) * GetDigit(1e4) * GetDigit(1e5) * GetDigit(1e6);
	int64 timeafter = GetTime();
	printf("%d in %.3lf ms",result,1000.0 * GetTimeDiff(timebefore,timeafter));
	return 0;
}
