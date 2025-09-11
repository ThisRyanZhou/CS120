// Qianjun Zhou
#include <stdio.h>

int main(){
	int row, column;
	for(row = 1; row <= 5; row = row + 1){
		for(column = 1; column <= 5; column = column + 1){
			printf(" %4d", row * column);
		}
		printf("\n");
	}
	// printf("%4d",column);
	// column should be 6 since the for loops fails at the 6th itteration
}
