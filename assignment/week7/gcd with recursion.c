#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return(b, a % b);
}
int main(void)
{
	int a, b;
	printf("�� ���� �Է��Ͻÿ�.: ");
	scanf("%d %d", &a, &b);
	printf("�ִ������� %d�Դϴ�.", gcd(a, b));
}
// ��Ŭ���� �˰���
// gcd(a, b) = gcd(b, a/b)�̴�.