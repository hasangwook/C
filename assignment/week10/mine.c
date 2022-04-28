#include <stdio.h>
#include <stdlib.h>
void set_mine(int mine[10][10]){
	srand((unsigned)time(NULL));
	for(int i = 0;i<10;i++){
		for(int j = 0;j<10;j++){
			mine[i][j] = rand()%2;
		}
	}
}
int main() {
	int mine[10][10];
	set_mine(mine);
	for(int i = 0;i<10;i++){
		for(int j = 0;j<10;j++){
			if(mine[i][j] == 1)
				printf(" #");
			else
				printf(" .");
		}
		printf("\n");
	}
	return 0;
}
