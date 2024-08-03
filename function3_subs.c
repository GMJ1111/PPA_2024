#include<stdio.h>
int Subtraction(int No1, int No2) //shop
{
    int minus = 0;
    minus = No1 - No2;
    return minus;
}
int main(){
    int value1 = 11;
    int value2 = 7;
    int Ans = 0;
    Ans = Subtraction(value1,value2);
    printf("Subtraction is = %d",Ans);
return 0;
}
