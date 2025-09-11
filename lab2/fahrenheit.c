#include <stdio.h>

int main(){
	printf("give me a float to convert to celcius");
	float f;
	scanf("%f", &f);
	float c = ((f - 32.0)/1.8);
	printf(" %f", c);
}
