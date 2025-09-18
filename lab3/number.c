#include <stdio.h>

int main(){
	int a;
	printf("Enter the number of floating point numbers and then enter each floating point number.\n");
	scanf("%i", &a);

	float input;
	scanf("%f", &input);
	
	//outputs
	float minimum = input;
	float maximum = input;
	float total = input;
	for(int i = 1; i < a; i++){
		scanf("%f", &input);
		if(input < minimum){
			minimum = input;
		}
		if(input > maximum){
			maximum = input;
		}
		total = total + input;
	}

	printf("Minimum: %f\n", minimum);
	printf("Maximum: %f\n", maximum);
	printf("Average: %f\n", total / a);
}
