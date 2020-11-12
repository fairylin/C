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
