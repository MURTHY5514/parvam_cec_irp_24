#include<stdio.h>
// function dec
int sum(int a, int b);

int main(){
    int a=10,b=10,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d \n",a,b,res);
    res=sum(30,40);
    printf("the sum of 30 and 40 is %d \n",res);
    res=sum(50,50);
    printf("the sum of 50 and 50 is %d \n",res);
    res=sum(100,60);
    printf("the sum of 100 and 60 is %d \n",res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}



// 4 types of user defined functions
// 1. return a value and accepting a values(parameters);  //done
// 2. return a value and not accepting a values(parameters);  //done
// 3. not return a value and accepting a values(parameters);  //done
// 4. not return a value and not accepting a values(parameters); //done