#include<stdio.h>
int main(){
    int N,sum=0,i;
    scanf("%d",&N);
    while(i<=N){
        sum=sum+i;
        printf("%d",sum);
        i++;
    }
    return 0;
}