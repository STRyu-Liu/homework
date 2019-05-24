// list511.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define NUMBER 5

#include<stdio.h>
int main(void) {
	int i;
	int tensu[NUMBER];
	int max, min;
	printf("输入%d人的分数\n",NUMBER);
	for (i = 0; i < NUMBER;i++) {
		printf("NO.%d:",i+1);
		scanf("%d",&tensu[i]);
	}
	min = max = tensu[0];
	for (i = 0; i < NUMBER; i++) {
		if (tensu[i] > max)	max = tensu[i];
		if (tensu[i] < min)	min = tensu[i];
	}
	printf("max:%d\n",max);
	printf("min:%d\n",min);
	
	return 0;
}

