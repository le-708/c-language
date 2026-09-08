#include <stdio.h>
 int main()
{
    int amount=100;
    int price=0;
    printf("请输入商品价格：");
    scanf("%d",&price);
    printf("请输入付款金额：");
    scanf("%d",&amount);
    int change=amount-price;
    printf("找零：%d\n",change);
    return 0;
}