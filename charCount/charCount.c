#include <stdio.h>
#include <string.h>

int main()
{
	int m, n, i, j, y, p;
	m = 0;
	n = 0;
	j = 0;
	p = 0;
	char x[60];
	gets(x);
	for (i = 0; i < strlen(x); i++){
		if (x[i] >= 'a' && x[i] <= 'z' || x[i] >= 'A' && x[i] <= 'Z'){
			m++;
		} else if (x[i] >= '0' && x[i] <= '9'){
			n++;
		} else if (x[i] == ' '){
			j++;
		} else {
			p++;
		}
	}
	printf("%d %d %d %d", m, n, j, p);
	return 0;
}
