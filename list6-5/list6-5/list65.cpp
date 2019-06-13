// list65.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>

double power(double x,int n) {
	double tmp=1.0;
	int i;
	for (i = 1; i <= n; i++) {
		tmp = tmp*x;
		
	}
	return tmp;
}


int main(void) {
	double a;
	int b;
	a = 4.6;
	b = 3;
	printf("%.2f",power(a,b));
	return 0;
}