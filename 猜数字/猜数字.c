#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
int Menu(){
	printf("��ӭ������������Ϸ\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("���������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game(){
	int toguess = rand() % 100 + 1;
	printf("��������²������\n");
	while (1){
		int num = 0;
		scanf("%d", &num);
		if (num < toguess){
			printf("�µ���\n");
		}
		else if (num>toguess){
			printf("�¸���\n");
		}
		else{
			printf("�¶��ˣ�\n");
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
			printf("�����������\n");
		}
	}
}