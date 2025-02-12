#include<stdio.h>
int main(){
    int x;
    if(x>=90){
        printf("A\n");
    }
    else if(90<x<=80){
        printf("B\n");
    }
    else if(80<x<=70){
        printf("C\n");
    }
    else if(70<x<=60){
        printf("D\n");
        }
    else{
        printf("F\n");
    }
    return 0;
}