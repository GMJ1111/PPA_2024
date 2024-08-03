#include<stdio.h>
int Addition(int No1, int No2) //shop
{
int Sum = 0;
Sum = No1 + No2;
return Sum;
}
int main() // home
{
    int value1 = 10;
    int value2 = 11;
    int Ans = 0; 
    Ans = Addition(value1,value2);
    printf("Addition is = %d",Ans);
    return 0;
}