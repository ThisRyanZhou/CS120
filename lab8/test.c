#include <stdio.h>

int x[] = {3, 55, 87, 70, 41, 0};

int main()
{
    int *s0 = x;
    int s1 = 0;  // Use this for the largest value
    int s2;

    // This while loop is implemented in an unusual
    // way, so that it's more clear what happens in
    // assembly.
    while(s2 = *s0, s2 != 0)
    {
        if(s2 > s1)
            s1 = s2;

        // Move the s0 pointer
        // Note that the C compiler will quietly add
        // 4 to the pointer (because integers are 4 bytes).
        // You'll need to add 4 explicitly when you convert
        // to assembly language
        s0 = s0 + 1;
    }

    printf("Largest is %d\n", s1);
  	return 0;
}

