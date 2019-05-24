// kakomon1.cpp: 定义控制台应用程序的入口点。
//
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include "stdafx.h"
#include<stdio.h>
int main(void) {
	int a, b, c;

	printf("enter three number:\n");
	printf("A:");	scanf("%d",&a);
	printf("B:");	scanf("%d",&b);
	printf("C:");	scanf("%d",&c);
	
	printf("avager=%lf",(double)(a+b+c)/3);

	return 0;
}
