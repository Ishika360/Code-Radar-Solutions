#include<stdio.h>
int main(){
    int x=1,y,N;
    while(x<=N){
        y=1;
        while(y<=x){
            printf("* ");
            y++;
        }
        printf("\n");
        x++;
    }
    return 0;
}