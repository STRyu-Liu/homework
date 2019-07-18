// list106.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<stdio.h>

void swap(int *x,int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}

int main(void) {
	int a = 1;
	int b = 2;
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	
	return 0;
}