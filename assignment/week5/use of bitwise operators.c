#include <stdio.h>
int main() {
	int num, num2;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);
	printf("2�� ���ϰ� ���� Ƚ��:");
	scanf("%d", &num2);
	printf("%d<<%d�� ��: %d", num, num2, num << num2);
	return 0;
}
