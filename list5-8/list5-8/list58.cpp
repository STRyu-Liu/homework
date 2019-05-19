// list58.cpp: 定义控制台应用程序的入口点。
//

#define _CRT_SECURE_NO_WARNINGS



#include "stdafx.h"

#include<stdio.h>
int main(void) {
	int i;
	int x[7];
	for (i = 0; i < 7; i++) {
		printf("x[%d]=",i);
		scanf_s("%d",&x[i]);
	}
	for (i = 0; i < 3; i++) {
		int temp = x[i];
		x[i] = x[6 - i];
		x[6 - i] = temp;
	}
	for (i = 0; i < 7; i++) {
		printf("x[%d]=%d\n",i,x[i]);
	}

	return 0;
}

