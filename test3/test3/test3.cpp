// test3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>

void power(double a,int b, double *c) {
	int i;
	double sum = 1.0;
	for (i = 0; i < b;i++) {
		sum = sum*a;
	}
	*c = sum;
}

int main(void) {
	double x;
	int y;
	double z;
	x = 2.5;
	y = 4;
	power(x,y,&z);
	printf("X^Y=%f\n",z);
	return 0;
}