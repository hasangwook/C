#include <string.h>
#include <stdio.h>
void encrypt(char st[], int shift);
int main(void)
{
	char st[100];
	int shift = 10;
	printf("문자열을 입력하세요: ");
	gets_s(st, 100);
	encrypt(st, shift);
	printf("%s", st);
}
void encrypt(char st[], int shift) {
	int i = 0;
	while (st[i] != '\0') {
		if ((st[i] >= 'a') && (st[i] <= 'z')) {
			st[i] += shift;
			if (st[i] > 'z') {//z가 넘어가는 알파벳을 다시 a부터 돌리기 위한 코드
				st[i] -= 26; 
			}
		}
		i++;
	}
}
//char형 문자는 ''로 써야한다. ""는 문자열용이다. 