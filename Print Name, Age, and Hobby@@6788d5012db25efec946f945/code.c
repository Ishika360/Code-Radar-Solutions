#include <stdio.h>
int main(){
    char str[100];
    int age;
    char str1[100];
    scanf("%s",str);
    scanf("%\nd",&age);
    scanf("\n%s",str1);
    printf("Name: %s",str);
    printf("Age: %d",age);
    printf("Hobby: %s",str1);
    return 0;

}