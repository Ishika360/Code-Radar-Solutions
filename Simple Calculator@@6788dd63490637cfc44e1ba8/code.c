#include<stdio.h>
int main(){
    int x,y;
    char ch;
    scanf("%d %d %c,&x,&y,&ch");
    switch (ch){
    case '+':
    printf("%d\n",x+y);
    break;
    case '-':
    printf("%d\n",x-y);
    break;
    case '*':
    printf("%d\n",x*y);
    break;
    case '/':
    if(y==0){
        prinf("error");
    }
    else{   
        printf("%d\n",x/y);
    }
    break;
    default:
    printf("error\n");
    break;
    }
    return 0;
}