#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(0));
    int n=rand()%100+1;
    int a=0;
    int count=0;
    printf("我已经想好了一个100以内的数。");
    do{
        printf("请输入你猜测的数。");
        scanf("%d",&a);
        count++;
        printf("你猜的数不对。");
        if(a<n){
            printf("猜小了。");
        }
        else if(a>n){
            printf("猜大了。");
        }
    }
    while(a!=n);
    printf("猜对了，你用了%d次就猜到了数字是%d\n",count,n);
    return 0;
}