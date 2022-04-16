#include <stdio.h>
int main() {
	int num;
	printf("키를 입력하시오(cm):");
	scanf("%d", &num);
	double inch = num / 2.54;
	int feet = inch/12;
	inch -= feet*12;
	printf("%dcm는 %d피트 %lf인치입니다.\n", num,feet,inch);
	return 0;
}
