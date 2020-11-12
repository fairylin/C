#include <stdio.h>
#include <string.h>
#define MAX 1000

int isChar(char ch)
{
	// 判断是否为字符数据
	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
		return 1;
	} else {
		return 0;
	}
}

char upTransfer(char ch)
{
	// 输出大写的字符
	if ('A' <= ch && ch <= 'Z') {
		return ch;
	} else {
		return ch - ('a' - 'A');
	}
}

char lowTransfer(char ch)
{
	// 输出小写的字符
	if ('a' <= ch && ch <= 'z') {
		return ch;
	} else {
		return ch + ('a' - 'A');
	}
}

int main()
{
	// 获取字符数组数据
	char str[MAX];
	gets(str);
	// 获取传入的字符长度
	int len = strlen(str);
	// 常量标识字符串第一个字符
	int first_all_char_flag = 1;
	for(int i = 0;i < len;i++){
		// 判断当前字符是否字符，如果不是字符，则置为0 不需要输出
		if(!isChar(str[i])){
			str[i] = 0;
		} else {
			// 判断当前字符前是否是空，如果是否，那么当前字符应该大写输出
			if(str[i-1] == 0){
				// 增加条件判断是否是字符串首字母，如果是首字母，不需要输出前空格
				if (first_all_char_flag == 1){
					printf("%c", upTransfer(str[i]));
					first_all_char_flag = 0;
				} else {
					printf(" ");
					printf("%c", upTransfer(str[i]));
				}
				
			} else {
				printf("%c", str[i]);
			}
		}
	}
	printf(".");
}
