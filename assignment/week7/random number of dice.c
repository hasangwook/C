#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face(){
	int num;
	static int c1 = 0;
	static int c2 = 0;
	static int c3 = 0;
	static int c4 = 0;
	static int c5 = 0;
	static int c6 = 0;
	for(int i = 0;i<100;i++){
		num = rand()%7;
		switch(num){
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;
			case 3:
				c3++;
				break;
			case 4:
				c4++;
				break;
			case 5:
				c5++;
				break;
			case 6:
				c6++;
				break;
		}
	}
	printf("1->%d\n2->%d\n3->%d\n4->%d\n5->%d\n6->%d\n", c1, c2, c3, c4, c5, c6);
}
int main() {
	srand((unsigned int)time(NULL));
	get_dice_face();
	return 0;
}
