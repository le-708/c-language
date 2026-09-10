#include <stdio.h>

int main()
{
    double foot;
    double inch;
    printf("请输入英尺，英寸");
    scanf("%lf %lf",&foot,&inch);
    printf("身高是%f米\n",
    ((foot+inch/12)*0.3048));
}