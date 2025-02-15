#include<stdio.h>
int main(){
    int x=1,y,N;
    scanf("%d",&N);
    while(x<=N){
        y=1;
        while(y<=N){
            printf("* ");
            y++;
        }
        printf("\n");
        x++;
    }
    return 0;
}