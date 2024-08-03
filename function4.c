#include<stdio.h>

int Addition(int No1, int No2) //shop
{
int Sum = 0;
Sum = No1 + No2;
return Sum;
}

int subtraction(int No1, int No2) //shop
{
int Sub = 0;
Sub = No1 - No2;
return Sub;
}

int multiplication(int No1, int No2) //shop
{
int product = 0;
product = No1 * No2;
return product;
}

int division(int No1, int No2) //shop
{
int div = 0;
div = No1 / No2;
return div;
}

int main() // home
{
    int value1 = 10;
    int value2 = 11;
    int Ans = 0; 
    Ans = Addition(value1,value2);
    printf("Addition is = %d \n",Ans);

    Ans = subtraction(value1,value2);
    printf("subtraction is = %d \n",Ans);

    Ans = multiplication(value1,value2);
    printf("multiplicaton is = %d \n",Ans);

    Ans = division(value1,value2);
    printf("division is = %d \n",Ans);

    return 0;
}