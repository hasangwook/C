#include <stdio.h>
void convert(double * grade, double *score, int size){
	for(int i = 0;i<size;i++){
		*(score + i) = *(grade + i)*100/4.3;
	}
}
int main() {
	double grade[10] = {0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4, 4.3};
	double score[10] = {};
	int size = 10;
	convert(grade, score, size);
	for(int j = 0;j<size;j++){
		printf("%05.2lf ", grade[j]);
	}
	printf("\n");
	for(int j = 0;j<size;j++){
		printf("%05.2lf ", score[j]);
	}
	printf("\n");
	return 0;
}
