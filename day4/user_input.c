#include<stdio.h>
int main(){
    int marks=0;
    printf("Enter a number: \n");
    scanf("%d",&marks);
    printf("value of marks is: %d \n",marks);
    //printing address
    printf("address of variable marks: %p",&marks);
    return 0;
}

