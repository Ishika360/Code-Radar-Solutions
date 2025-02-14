#include<stdio.h>
int main(){
    int x,y,z
    scanf("%d %d %d",&x,&y,&z)
switch(z){
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
        prinf("error\n");
    }
    else{   
        printf("%d\n",x/y);
    }
    break;
    default:
    printf("error\n");
}
    return 0;
}