// list57.cpp: 定义控制台应用程序的入口点。
//
#define _CRT_SECURE_NO_WARNINGS
//关于vs2017对于scanf报错的解决办法


#include<stdio.h>
int main(void) {
	int i;
	int v[5];

	for (i = 0; i < 5; i++) {
		printf("v[%d]=",i);
		scanf("%d",&v[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("v[%d]=%d\n",i,v[i]);
	}
	
	
	
	return 0;
}