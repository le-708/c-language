#include <stdio.h>

int main()

{
    int pass=60;
    int score;
    printf("请输入您的成绩：\n");
    scanf("%d",&score);
    printf("您输入的成绩是：%d\n",score);
    if(score<pass){
        printf("对不起您的成绩不合格\n");
    }
    else{
        printf("恭喜你成绩合格\n");
    }
    printf("再见");
    return 0;
}