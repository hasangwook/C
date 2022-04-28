#include <stdio.h>
void array_add(int *A, int *B, int *C, int size){
	for(int i = 0;i<size;i++){
		*(C+i) = *(B+i) + *(A+i);
	}
}
int main() {
	int A[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
	int B[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int C[10] = {};
	int size = 10;
	array_add(A, B, C, size);
	printf("A[] = ");
	for(int j = 0;j<size;j++)
		printf("%d ", A[j]);
	printf("\nB[] = ");
	for(int j = 0;j<size;j++)
		printf("%d ", B[j]);
	printf("\nC[] = ");
	for(int j = 0;j<size;j++)
		printf("%d ", C[j]);
	printf("\n");
	return 0;
}
