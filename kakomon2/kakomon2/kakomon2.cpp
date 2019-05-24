// kakomon2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
int main(void) {
	int a=-3;
	printf("a=");
	scanf("%d", &a);
	if (a >= 0) {
		printf("answer=%d", a);
	}
	else {
		printf("answer=%d", -a);
	}
	return 0;
}