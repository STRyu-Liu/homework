// ex52.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>
int main(void) {
	int i;
	int j = 5;
	int v[5];

	for (i = 0; i < 5; i++) {
		v[i] = j;
		j--;
		
	}
	for (i = 0; i < 5; i++) {
		printf("v[%d]=%d\n",i,v[i]);
	}
	return 0;
}
