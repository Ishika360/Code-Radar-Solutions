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
    else if(ch=='/' && y!=0){
        
            printf("%d\n",x/y);
        }
    
    else if{
        printf("error");
    }    
    return 0;
    }