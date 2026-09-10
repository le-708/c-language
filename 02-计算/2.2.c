#include <stdio.h>

int main()
{
    int time1,time2;
    scanf("%d %d",&time1,&time2);
    int t1=time1/100*60;
    int t2=time1%100;
    int t3=t1+t2+time2;
    int t4=t3/60*100+t3%60;
    printf("%d",t4);
    return 0;
}