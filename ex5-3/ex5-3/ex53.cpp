// ex53.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>
int main(void) {
	int v[5] = {5,4,3,2,1};
	int i;
	for (i = 0; i < 5; i++) {
		printf("v[%d]=%d\n",i,v[i]);
	}

	return 0;
}