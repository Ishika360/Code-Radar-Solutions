#include<stdio.h>
int main(){
    int x;
    if(x>=90){
        printf("A");
    }
    else if(90<x>=80){
        printf("B");
    }
    else if(80<x>=70){
        printf("C");
    }
    else if(70<x>=60){
        printf("D");

    }
    else{
        printf("F");
    }
    return 0;
}