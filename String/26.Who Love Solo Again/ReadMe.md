### 题目
题目描述
输入一个英文句子，句子中仅包含英文字母，数字，空格和标点符号，其中数字、空格和标点符号将句子划分成一个个独立的单词，除去句子中的数字、空格和标点符号，将句子中的每个单词的首字母大写，然后输出句子，输出时各个单词之间以一个空格隔开，句子以“.”结束

解答要求
时间限制：1000ms, 内存限制：64MB
输入
输入只有一行，包含一个长度都不超过100的字符串S，表示英文句子。

输出
输出只有一行，即按要求输出处理后的英文句子，若句子中不含任何单词，则输出一个“.”。

样例

输入样例 1 复制

Who love?, Solo..

输出样例 1

Who Love Solo.

输入样例 2 复制

----Who,love???Solo

输出样例 2

Who Love Solo.

输入样例 3 复制

66666666664123+Who-32didn't love? Solo32..

输出样例 3

Who Didn T Love Solo.

#### 解题思路
1. 识别每一个输入字符，如果是英文字母，则判断其位置：
	全局第一，直接大写输出
	后续单词第一，则输出空格后，输出字符
2. 识别其中的非英文单词字符，直接忽略，不输出
3. 输出所有的字符后，最后输出结束符"."


#### 方案样例01
```C
1. 通过打标识符的形式进行位置判断，实现首字母大写
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
```


#### 方案样例02
```C
1. 通过对字符数组中的位置上的字符内容判断，进而判断当前位置是否是单词首字母
2. 存在问题是：字符数组的第一个字母出现的位置，是无法通过这种方式识别的，只能通过打标识符的形式识别
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
```

#### PS
实现输入的字符串中，字符读取、位置判断，仅作为个人总结记录！
