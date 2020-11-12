### 题目
程序实现 元音英文字母输出大写，其他字母小写
题目描述
solo从小就对英文字母非常感兴趣，尤其是元音字母(a,e,i,o,u,A,E,I,O,U)，他在写日记的时候都会把元音字母写成大写的，辅音字母则都写成小写，虽然别人看起来很别扭，但是solo却非常熟练。你试试把一个句子翻译成solo写日记的习惯吧。

解答要求
时间限制：1000ms, 内存限制：64MB
输入
输入一个字符串S(长度不超过100，只包含大小写的英文字母和空格)。

输出
按照solo写日记的习惯输出翻译后的字符串S。

样例
输入样例 1 复制

Who Love Solo
输出样例 1

whO lOvE sOlO

#### 解决方案
1. 识别元音辅音字母
2. 识别大小写
3. 转换大小写的方式
4. 处理其他非英文字母的特殊字符（else）
5. 输出转换后的字符串

#### 程序示例
```C
#include <stdio.h>
#include <string.h>
#define MAX_STR 1000

int main()
{
	char c;
	while(scanf("%c", &c) != EOF){
		
		int isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
		int isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
		if (isUppercaseVowel) {
			printf("%c", c);
		} else if (isLowercaseVowel){
			printf("%c", c-'a'+'A');
		} else if(c >= 'a' && c <= 'z' && !isLowercaseVowel && !isUppercaseVowel){
			printf("%c", c);
		} else if(c >= 'A' && c <= 'Z' && !isLowercaseVowel && !isUppercaseVowel){
			printf("%c", c+'a'-'A');
		} else {
			printf("%c", c);
		}
	}
}
```

#### PS
程序实现英文作文中，所有元音字母大写显示，所有辅音字母小写显示，其他字符原样显示！
