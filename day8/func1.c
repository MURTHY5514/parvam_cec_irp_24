// function
/*
    in-build --> printf,scanf
    user-defined ---> sum

1. function dec --> int sum(int,int);
2. function def:
================
int sum(int a, int b){
    return a+b;
}
3. function call:
=================
int res=sum(10,20);
*/

#include<stdio.h>

// int sum(int,int);
// void sum(int,int);
// int sum();
void sum();

int main(){
    sum();
    return 0;
}

void sum(){
    int a=20,b=40;
    printf("Result is %d",a+b);
}



// 4 types of user defined functions
// 1. return a value and accepting a values(parameters);  //done
// 2. return a value and not accepting a values(parameters);  //done
// 3. not return a value and accepting a values(parameters);  //done
// 4. not return a value and not accepting a values(parameters); //done