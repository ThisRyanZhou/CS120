#include <stdio.h>
// Qianjun Ryan Zhou

void print_bits(int n, int bits)
{
  // 0110 & 0011 => (0&0)(1&0)(1&1)(0&1) = 0010
  //    0110
  // &  0011
  // --------
  //    0010

  for(int i = bits - 1; i >= 0; --i)
  {
    if(n & (1 << i))  // for example 0001 << 2 = 0100
    {
      printf("1");
    }
    else
    {
      printf("0");
    }
  }
}

void table(int rows, int columns, int bits, int operation){
        for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                        switch(operation){
				case 0:
					//multiplication
					int valAt = i * j;
					print_bits(valAt, bits);
					printf(" ");
					break;
				case 1:
					//and
					int valAt1 = i & j;
					print_bits(valAt1, bits);
					printf(" ");
					break;
				case 2:
					//or
					int valAt2 = i | j;
					print_bits(valAt2, bits);
					printf(" ");
					break;
			}
			//print_bits(0, 8);
                        //printf(" ");
                }
                printf("\n");
        }
}

int main(){
	table(8,8,8,0);
	printf("\n");
	table(8,8,8,1);
	printf("\n");
	table(8,8,8,2);
}

