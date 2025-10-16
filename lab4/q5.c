#include <stdio.h>

int main()
{
  // define 5 arrays of different types
  int a[10];
  float b[10];
  double c[10];
  long d[10];
  char e[10];
	
  printf("Addresses A %p %p\n", &a[1], &a[0]);
  printf("Addresses B %p %p\n", &b[1], &b[0]);
  printf("Addresses C %p %p\n", &c[1], &c[0]);
  printf("Addresses D %p %p\n", &d[1], &d[0]);
  printf("Addresses E %p %p\n", &e[1], &e[0]);

  printf("Size of int: %zu bytes\n", sizeof(a[1]));
  printf("Size of float: %zu bytes\n", sizeof(b[1]));
  printf("Size of double: %zu bytes\n", sizeof(c[1]));
  printf("Size of long: %zu bytes\n", sizeof(d[1]));
  printf("Size of char: %zu bytes\n", sizeof(e[1]));
  return 0;
}
