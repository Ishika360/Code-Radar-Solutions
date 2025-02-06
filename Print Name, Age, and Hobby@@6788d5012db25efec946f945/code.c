#include <stdio.h>
int main(){
    char str[100];
    int age;
    char str1[100];
    printf("enter your name:");
    scanf("%s",str);
    printf("enter your age:");
    scanf("%\nd",&age);
    printf("enter your hobby:");
    scanf("\n%s",str1);
    printf("Name: %s\n",str);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",str1);
    return 0;

}