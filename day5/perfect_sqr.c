#include<stdio.h>
#include<math.h>
int main(){
    //49    --->  7*7 ---> 49
    int inputNumber=0,sqrt1=0;
    printf("enter a number: \n");
    scanf("%d",&inputNumber);
    sqrt1 = sqrt(inputNumber);
    printf("square root of %d is : %d \n",inputNumber,sqrt1);

    if( (sqrt1*sqrt1) == inputNumber){
        printf("perfect square");
    }
    else{
        printf("not a perfect square");
    }
    return 0;
}