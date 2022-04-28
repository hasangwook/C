#include<stdio.h>
#include<ctype.h>
int count_word(char* s);
int main(void) {
	int wc = count_word("the c book....");
	printf("단어의 개수: %d", wc);
	return 0;
}

int count_word(char* s) {
	int i, wc = 0, wait = 1;
	for (i = 0; s[i] != NULL; ++i) {
		if (isalpha(s[i])) {
			//알파벳이면 여기로 들어오게 됨.(단어의 시작점을 단어개수로 세겠다는거
			if (wait) {
				wc++;
				wait = 0;
				//이렇게 해야 다음 단어까지 반복이 된다.
			}
		}
		else
			wait = 1;
	}
	return wc;
}