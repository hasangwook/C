#include <stdio.h>
void arithmetic(int num1, int num2, char ari){
	static int count1 = 0; 
	static int count2 = 0;
	static int count3 = 0;
	static int count4 = 0;
	char ch2;
	switch(ari){
		case '+':
			count1++;
			printf("덧셈은 총 %d번 실행되었습니다.\n", count1);
			printf("연산 결과: %d\n", num1+num2);
			break;
		case '-':
			count2++;
			printf("뺄셈은 총 %d번 실행되었습니다.\n", count2);
			printf("연산 결과: %d\n", num1-num2);
			break;
		case '*':
			count3++;
			printf("곱셈은 총 %d번 실행되었습니다.\n", count3);
			printf("연산 결과: %d\n", num1*num2);
			break;
		case '/':
			count4++;
			printf("나눗셈은 총 %d번 실행되었습니다.\n", count4);
			printf("연산 결과: %d\n", num1/num2);
			break;
	}
	return 0;
}
int main() {
	int num1, num2;
	char ari;
	while(1){
		printf("연산을 입력하시오: ");
		scanf("%d%c%d", &num1, &ari, &num2);
		arithmetic(num1, num2, ari);
	}
	return 0;
}
