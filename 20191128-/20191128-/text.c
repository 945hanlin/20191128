#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
void menu(){
	printf("======0.��ʼ������======\n");
	printf("=======1.�������=======\n");
	printf("=====2.����Ԫ�ص���ת====\n");
}
void init(char arr1[], int sz){
	int j = 0;
	for (j = 0; j <sz; j++){
		arr1[j] = 0;
		printf("%d", arr1[j]);
	}
}
void empty(char arr2[], int sz){
	int j = 0;
	for (j = 0; j < sz; j++){
		arr2[j] = 0;
		printf("%d", arr2[j]);
	}
}
void reverse(char arr3[], int sz){
	int left = 0;
	int right = sz - 1;
	int i = 0;
	for (i = 0; i < sz; i++){
		while (left < right){
			char tmp = arr3[left];
			arr3[left] = arr3[right];
			arr3[right] = tmp;
			left++;
			right--;
		}
		printf("%c", arr3[i]);
	}
	return arr3[i];
}
enum Option
{
	init1, empty1, reverse1
};
int main(){
	char arr[] = "abcdefghijk";
	int ret = strlen(arr);
	int i = 0;
	int a = 0;
	menu();
	printf("�����������Ĳ���\n");
	scanf("%d", &a);
	switch (a){
	case init1:
		printf("��ʼ�����飺");
		init(arr, ret);
		printf("\n");
		break;
	case empty1:
		printf("������飺");
		empty(arr, ret);
		printf("\n");
		break;
	case reverse1:
		printf("��������ã�");
		reverse(arr, ret);
		printf("\n");
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}
