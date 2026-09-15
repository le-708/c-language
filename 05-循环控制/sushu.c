#include <stdio.h>

int main()

{
    int n=6;
    
    for(n=2;n<=100;n++){
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
        }
        
    }
    printf("\n");
    return 0;
    
}