// kakomon3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
int main(void) {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 2) {
			printf("%d ",i);
		}
	}
	return 0;
}