#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%s",name);
    scanf("%\nd",&age);
    scanf("\n%s",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;

}