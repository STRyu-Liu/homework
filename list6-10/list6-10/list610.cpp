// list610.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define NUMBER 5
int tensu[NUMBER];
int top(void);

int main(void) {
	extern int tensu[];
	int i;
	printf("enter tensu:");
	for (i = 0; i <= NUMBER; i++) {
		printf("No.%d:",i);
		scanf("%d",&tensu[i-1]);
	}
	printf("top is %d",top());
	return 0;
}
int top(void) {
	extern int tensu[];
	int i;
	int max = tensu[0];
	for (i = 0; i <= NUMBER; i++) {
		if (tensu[i] > max) {
			max = tensu[i];
		}
	}
	return max;
}
