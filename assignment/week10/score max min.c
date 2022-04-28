#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void score_rand(int score[10][3]){
	srand((unsigned int)time(NULL));
	for(int i = 0;i<10;i++){
		for(int j = 0;j<3;j++){
			score[i][j] = rand()%100;
		}
	}
}
int score_max(int score[10][3], int max[3]){
	for(int j = 0;j<3;j++){
		for(int i = 0;i<10;i++){
			if(score[i][j]>max[j])
				max[j] = score[i][j];
		}
	}
}
int score_min(int score[10][3], int min[3]){
	for(int l = 0;l<3;l++){
		for(int k = 0;k<10;k++){
			if(score[k][l]<min[l])
				min[l] = score[k][l];
		}
	}
}
int main() {
	int min[3] = {100, 100, 100};
	int max[3] = {0, 0, 0};
	int score[10][3];
	score_rand(score);
	for(int m = 0;m<10;m++){
		for(int n = 0;n<3;n++){
			printf("%d ", score[m][n]);
		}
		printf("\n");
	}
	score_max(score, max);
	score_min(score, min);
	for(int i = 0;i<3;i++){
		printf("시험 #%d의 최대점수=%d\n",i+1, max[i]);
		printf("시험 #%d의 최소점수=%d\n",i+1, min[i]);
	}
	return 0;
}
