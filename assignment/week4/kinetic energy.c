#include <stdio.h>
int main() {
	int mass, vel;
	printf("질량(kg): ");
	scanf("%d", &mass);
	printf("속도(m/s): ");
	scanf("%d", &vel);
	float energy = mass*(vel*vel) / 2;
	printf("운동에너지(J): %f", energy);
	return 0;
}
