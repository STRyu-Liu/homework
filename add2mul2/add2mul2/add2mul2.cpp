// add2mul2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"//交作业的时候删掉

#include<stdio.h>

int add2(int a, int b) {
	int plus;
	plus = a + b;
	return plus;
}

int mul(int a, int b) {
	int multiply;
	multiply = a*b;
	return multiply;

}

int main(void) {
	int x, y, z;
	puts("enter 3 number");
	scanf("%d",&x);
	scanf("%d", &y);
	scanf("%d", &z);
	
	printf("(x+y)*z=%d",mul(add2(x,y),z));


	return 0;
}