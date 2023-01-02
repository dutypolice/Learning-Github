#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	float jj = 35;
	float yj = 15;
	float ct = 20;
	float leader = 50;


	printf("%f\n", yj * 0.3);
	float res = jj * 0.3 + yj * 0.3 + ct * 0.2 + leader * 0.2;

	printf("%f", res);
}