// ex51.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>

int main(void){
	int v[5];
	int i;

	for (i = 0; i < 5; i++) {
		v[i] = i ;
	}

	for (i = 0; i < 5; i++) {
		printf("v[%d]=%d",i,v[i]);
	}
    return 0;
}

