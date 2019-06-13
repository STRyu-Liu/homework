// ex65.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>

int sumup(int n) {
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}

int main(void) {
	int n;
	n = 10;
	printf("%d",sumup(n));
	return 0;
}