#include<stdio.h>
int main(){
    int N,x=1,y;
    scanf("%d",&N);
    while(x<=N){
        y=x;
        while(y<=N){
            printf("* ");
            y++;
        }
        printf("\n");
        x++;
    }
    return 0;

}