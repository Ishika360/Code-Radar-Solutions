#include<stdio.h>
int main(){
    int x,y;
    char ch;
    scanf("%d %d %c, &x, &y, &ch");
    if(ch=='+'){
        printf("%d\n",x+y);
    }
    else if(ch=='-'){
        printf("%d\n",x-y);

    }
    else if(ch=='*'){
        printf("%d\n",x*y);
    }
    else if(ch=='/'){
        if(ch==0){
        printf("error");
        }
        else{
            printf("%d",x/y);
        }
    }
    
    else {
        printf("error");
    }    
    return 0;
    }