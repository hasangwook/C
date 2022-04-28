#include <stdio.h>
#define SIZE 10
int array_equal(int a[], int b[], int size);
int main() {
	int array[10];
	int array1[10];
	scanf("%d %d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9]);
	scanf("%d %d %d %d %d %d %d %d %d %d", &array1[0], &array1[1], &array1[2], &array1[3], &array1[4], &array1[5], &array1[6], &array1[7], &array1[8], &array1[9]);
	int flag = array_equal(array, array1, SIZE);
	if (flag == 1)
		printf("2개의 배열은 같음\n");
	else
		printf("2개의 배열은 다름\n");
	return 0;
}
int array_equal(int a[], int b[], int size){
	for(int i = 0;i<size;i++){
		if(a[i]==b[i]){
			if(i == 9){
				return 1;
			}
			continue;
		}
		else
			return 0;
	}
}

