#include <stdio.h>

int main()

{
    int a=5;
    int b=6;
    int t;
    t=a;
    a=b;
    b=t;
    printf("现在a和b的值为%d %d",a,b);
    return 0;
}