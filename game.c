
/* 主要包括：飞机显示、控制移动、发射子弹、击中敌机等功能。*/
// 函数外全局变量定义编写
// 函数


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include "game.h"

// 声明全局变量
int position_x, position_y; // 飞机位置
int bullet_x, bullet_y; // 子弹位置
int enemy_x, enemy_y; // 敌机位置
int score; // 得分

void startup(void) // 数据初始化
{
	position_x = HIGH / 2;
	position_y = WIDTH / 2;
	bullet_x = -2;
	bullet_y = position_y;
	enemy_x = 0;
	enemy_y = position_y;
	score = 0;
}

void show(void) // 显示画面
{
	system("cls"); // 清屏函数
	int i, j;
	for (i = 0; i < HIGH; i++)
	{
		for (j = 0; j < WIDTH; j++)
		{
			if ((i == position_x) && (j == position_y)) // 在计算好的位置输出飞机
				printf("*");
			else if ((i == enemy_x) && (j == enemy_y))
				printf("@");
			else if ((i == bullet_x) && (j == bullet_y))
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("score: %d\n", score);
}
