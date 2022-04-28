#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);
int main(void)
{
	int answer = sum(4, 4, 3, 2, 1);
	//�μ�����, �μ��� ����
	printf("���� %d�Դϴ�.\n", answer);

	return(0);
}

int sum(int num, ...)//�μ� ����, �μ����� ���� ���̶� ǥ��
{
	int answer = 0;
	va_list argptr; //���� �Ű����� �ڷ��� ���� ����

	va_start(argptr, num);//���� �Ű����� num��ŭ ����.
	for (; num > 0; num--)
		answer += va_arg(argptr, int);//���� �Ű����� ó�������� ������.

	va_end(argptr);//���� �Ű����� ����
	return answer;
}