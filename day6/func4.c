#include<stdio.h>
//fun dec
int sumOfNaturalNo(int);

int main(){
    int inputNumber=0,res;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);
    res=sumOfNaturalNo(inputNumber);
    printf("the sum of n natural number %d is %d ",inputNumber,res);
    return 0;
}

int sumOfNaturalNo(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
            sum+=i;
    }
    return sum;
}














// 10
// 2+4+6+8+10=30
// 1+3+5+7+9=25