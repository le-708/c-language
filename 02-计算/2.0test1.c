#include <stdio.h>

int main()
{
    int A,B;
    printf("请输入两个正整数A,B:");
    scanf("%d %d",&A,&B); 
    printf("%d + %d = %d\n",A,B,A+B);
    printf("%d - %d = %d\n",A,B,A-B);
    printf("%d * %d = %d\n",A,B,A*B);
    printf("%d / %d = %d\n",A,B,A/B);
    return 0;
}

