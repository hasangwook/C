#include <stdio.h>
#include <stdlib.h>
int binary_maker(int binary[], int n){
	int max;
	for(int i=0;i<100&&n>0;i++){ //�������� ��ȯ�ϱ� ���� for��
		binary[i] = n%2;
		n /= 2;
	}
	for(int j=0;j<100;j++){ //max���� ���ϱ� ���� for��
		if(binary[j] != 0)
			max = j;
	}
	return max;
}

int main() {
	int binary[100]={0};
	int n=32;
	int x = binary_maker(binary, n);
	printf("%d -> ", n);
	for(int j = x; j>-1;j--){
		printf("%d", binary[j]);
	}
	
	return 0;
}
