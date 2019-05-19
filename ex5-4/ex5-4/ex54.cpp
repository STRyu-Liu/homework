// ex54.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>
int main(void) {
	int i;
	int j=4;
	int a[5] = {17,23,36,0,0};
	int b[5];

	for (i = 0; i < 5; i++) {
		b[j] = a[i];
		j--;
	}
	puts(" a	b");
	puts("---------");
	for (i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], b[i]);
	}
	return 0;
	
}