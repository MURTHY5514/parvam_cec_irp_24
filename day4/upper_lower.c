#include<stdio.h>
//calucate the given character is upper or lower
int main(){
    char inputChar;
    printf("Enter a character: \n");
    scanf("%c",&inputChar);
    if(inputChar>=65 && inputChar<=90){
        printf("The given character is upper");
    }
    else{
        printf("The given character is lower");
    }
    return 0;
}

