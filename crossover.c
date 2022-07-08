#include<stdio.h>

int main(){
    int j,i;
    printf("size:",j);
    scanf("%d",&j);
    printf("enter integer arrays");
    int x[j],y[j];
    
    for(i=0;i<j;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<j;i++){
        scanf("%d",&y[i]);
    }
    
    for(i=0;i<j;i++){
        if(x[i]>= y[i]){
            if(y[i+1]>x[i+1]){
                printf("%d",i);
                break;
            }
        }
    }
    
    return 0;
}
