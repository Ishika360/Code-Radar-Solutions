#include<stdio.h>
int main(){
    int x,y;
    char ch;
    switch (ch){
    scanf("%d %d %d ,&x,&y,&ch");
    case '+';
    printf("%d",x+y);
    break:
    case '-':
    printf("%d",x-y);
    break;
    case '*';
    printf("%d",x*y);
    break;
    case '/';
    if(y==0){
        prinf("error");
    }
    else{   
        printf("%d",x/y);
    }
    default:
    printf("error\n");
    break;
    }
    return 0;
}