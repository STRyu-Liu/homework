// list104.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<stdio.h>

void hiroko(int *hight) {
	if (*hight < 180) {
		*hight = 180;
	}
}
int main(void) {
	int masaki = 170;

	hiroko(&masaki);
	printf("masaki=%d",masaki);

	return 0;
}
