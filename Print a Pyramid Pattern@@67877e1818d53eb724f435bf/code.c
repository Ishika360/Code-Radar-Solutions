#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=N;i++){
        for(j=N;j>i;j--){
            printf(" ");
            for(k=1;k<i;k++){
                printf("*");
            }
        }
    }
return 0;
}