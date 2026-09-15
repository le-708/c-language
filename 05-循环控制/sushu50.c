#include <stdio.h>

int main()

{
    int n=2;
    int count=0;
    
    //for(n=2;n<=100;n++)
    while(count<50)
    {
        int isright=1;
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
            isright=0;
            break;
            }
        }
        if(isright==1){ 
            printf("%d ",n);
            count++;
        }
        n++;
    }
    printf("\n");
    return 0;
    
}