#include<stdio.h>
int main(){
    int N,x=1,y;
    scanf("%d",&N);
    while(x<=N){
        y=1;
        while(y<=x){
            printf("%d %c",x);
            y++;
        }
        printf("\n");
        x++;
    }
    return 0;
}