#include<stdio.h>

int main() {
	float F,C ;
	printf("Input Fahrenheit : ");
	scanf_s("%f", &F);
	C = (5 * (F - 32))/9 ;
	if (F >= 32) printf("Celsius = %.2f", C);
	else printf("Too cold to live");

}