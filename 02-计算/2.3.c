#include <stdio.h>

int main()

{
    int a;
    scanf("%d",&a);
    int bai=a%10*100;
    int shi=a%100/10*10;
    int ge=a/100;
    int b=bai+shi+ge;
    printf("%d",b);
    return 0;

}