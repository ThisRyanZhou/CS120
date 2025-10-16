#include <stdio.h>

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

int main()
{
  for(int i = 0; i < 32; ++i)
  {
    printf("%2d = ", i);
    print_bits(i, 8);	// print i as an 8-bit binary number
    printf("\n");
  }

  return 0;
}
