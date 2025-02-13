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
        if(y==0){
            printf("error\n");
        }
        else{
            printf("%d\n",x/y);
        }
    }
    else{
        printf("error");
    }    
    return 0;
    }