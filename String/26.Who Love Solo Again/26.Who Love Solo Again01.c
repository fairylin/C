#include <stdio.h>
#include <string.h>
#define MAX 1000

int isChar(char ch)
{
	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
		return 1;
	} else {
		return 0;
	}
}

char Transfer(char ch)
{
	if ('A' <= ch && ch <= 'Z') {
		return ch;
	} else {
		return ch - ('a' - 'A');
	}
}

int main()
{
	char str[MAX];
	gets(str);

	int first_each_flag = 1;
	int first_all_flag = 1;
	int length = strlen(str);

	for(int i = 0;i < length;i++){
		if(isChar(str[i])){
			if(first_all_flag){
				printf("%c", Transfer(str[i]));
				first_all_flag = 0;
				first_each_flag = 0;
				continue;
			} else if(first_each_flag) {
				first_each_flag = 0;
				printf(" ");
				printf("%c", Transfer(str[i]));
			} else {
				printf("%c", str[i]);
			}
		} else {
			first_each_flag = 1;
		}
	}
	printf(".");
	return 0;
}
