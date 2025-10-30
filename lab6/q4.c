#include <stdio.h>

int main()
{
	int b = 798;
	int a = 0;
	int max = ((a << 5) | (b << 3) | (a & b)) & 0xFE90;
	for(a = 0; a < 99; a++){
		int newVal = ((a << 5) | (b << 3) | (a & b)) & 0xFE90;
		if(max > newVal){
			max = newVal;
		}
	}
	printf("highest val is %d", max);
}
		
