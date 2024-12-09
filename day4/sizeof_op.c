#include<stdio.h>
int main(){
    char inputChar;
    printf("the size of char is : %d \n",sizeof(inputChar));
    int a=10;
    printf("the size of int is : %d\n",sizeof(a));
    float b=10.01;
    printf("the size of float is : %d\n",sizeof(b));
    printf("the size is a+b :%d",sizeof(a+b));
    return 0;
}