#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
int Menu(){
	printf("欢迎来到猜数字游戏\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("请输入你的选择\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game(){
	int toguess = rand() % 100 + 1;
	printf("请输入你猜测的数字\n");
	while (1){
		int num = 0;
		scanf("%d", &num);
		if (num < toguess){
			printf("猜低了\n");
		}
		else if (num>toguess){
			printf("猜高了\n");
		}
		else{
			printf("猜对了！\n");
		}
	}
}
int main(){
	srand(time(0));
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("good bye\n");
		}
		else {
			printf("你的输入有误\n");
		}
	}
}