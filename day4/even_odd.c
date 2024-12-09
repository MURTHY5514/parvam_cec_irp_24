#include<stdio.h>
//calucate the given numver is even or odd
int main(){
    int inputNumber=0;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);
    /*
    if(condition){
        //yes
    }
    else{
        //no
    }
    */
    if(inputNumber%2==0){
        printf("The given number is even");
    }
    else{
        printf("the given number is odd");
    }

    return 0;
}

