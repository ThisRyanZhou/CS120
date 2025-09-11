// Calculate the sum of the numbers 1 to Max
// Qianjun Zhou
#include <stdio.h>
#define MAX 15

int main(){
	int sum;
	int i;
	sum = 0;
	for(i = 1; i <= MAX; i = i + 1){
		sum = sum + i;
	}
	printf("The sum from 1 to %d is %d\n", MAX, sum);
}
