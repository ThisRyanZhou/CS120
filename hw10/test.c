#include <stdio.h>

int compute(int a0){
    int t1 = 1;
    int t2 = 0
    while(t2 < a0){
        t1 = t1 << 2;
        t2 = t2 + 1;
    }
    return t1;
}

int main(){
    int t0 = 10;
    int a0 = compute(t0);
    printf("%d\n", a0);
    return 0;
}
