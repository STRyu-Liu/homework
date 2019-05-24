// kakomon4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
int main(void) {
	int a=6;
	int i;
	int sum = 1;
	//printf("a=");
	//scanf("%d",&a);
	for (i = 1; i <= a; i++) {
		sum = i*sum;
	}
	printf("answer=%d",sum);


	return 0;
}