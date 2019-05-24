// list512.cpp: 定义控制台应用程序的入口点。
//

#pragma warning(disable:4996)
#include "stdafx.h"
#define NUMBER 80
#include<stdio.h>
int main(void) {
	int i,j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};

	printf("How many people?");

	do {
		scanf("%d",&num);//写在do里面是为了如果输入错误值可以重新输入,do-while至少执行一次，即使第一次正确输入也可正常执行
		if (num > NUMBER || num < 1) {
			printf("Enter number 1~%d.",NUMBER);
		}
	} while (num > NUMBER || num < 1);
	
	printf("Enter they score:");
	for (i = 0; i < num; i++) {
		printf("NO.%d:\n",i+1);
		do {
			scanf("%d", &tensu[i]);//由于是在for循环内，可反复执行
			if (tensu[i] < 0 || tensu[i]>100) {
				printf("Enter number 1~100.");
			}
		} while (tensu[i]<1||tensu[i]>100);
		bunpu[tensu[i] / 10]++;//取十位的值，统计各个分数段人数
	}

	puts("\n-----score-----");
	printf("	100:");
	for (j = 0; j < bunpu[10]; j++) {
		putchar('*');
	}
	putchar('\n');

	for (i = 9; i > 0; i--) {
		printf("%3d~%3d:", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++) {
			putchar('*');
		}
		putchar('\n');
	}


	return 0;
}