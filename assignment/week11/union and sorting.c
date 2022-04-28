#include <stdio.h>

void merge(int *A, int *B, int *C, int size){
	for(int i = 0;i<size;){
		for(int j = 0;j<size;){
			for(int k = 0;k<2*size;){
				if(i==4 && j==4)
					return 0;
				if(i == 4){
					C[k] = B[j];
					j++;
					k++;
				}
				else if(j == 4){
					C[k] = A[i];
					k++;
					i++;
				}
				else{
					if(A[i]>=B[j]){
						C[k] = B[j];
						k++;
						j++;
					}
					else{
						C[k] = A[i];
						i++;
						k++;
					}
				}
			}
		}
	}
}
int main() {
	int A[] = {2, 5, 7, 8};
	int B[] = {1, 3, 4, 6};
	int C[8], size = 4;
	merge(A, B, C, size);
	printf("A[] = ");
	for(int i = 0;i<size;i++){
		printf("%d ", A[i]);
	}
	printf("\nB[] = ");
	for(int i = 0;i<size;i++){
		printf("%d ", B[i]);
	}
	printf("\nC[] = ");
	for(int i = 0;i<size*2;i++){
		printf("%d ", C[i]);
	}
	printf("\n");
	return 0;
}
