#include<stdio.h>
int main(){
    int num,x=0;
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            x=1;
            break;

        }
        }    
        if(i%2==0){
        printf("Not Prime");
    }    
    else{
        printf("Prime");
    }
    return 0;
}