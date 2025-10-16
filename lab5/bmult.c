#include <stdio.h>

void printBits(int num, int numBits){
	for(int i = numBits - 1; i >= 0; --i){
		if(num & (1<<i)){
			printf("1");
		}
		else{
			printf("0");
		}
	}
}
int main(){
	for(int i = 0; i <= 5; i++){
		for(int j = 0; j <= 5; j++){
			int valueAt = i * j;
			printBits(valueAt, 8);
			printf(" ");
		}
		printf("\n");
	}
}
