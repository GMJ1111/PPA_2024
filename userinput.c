#include<stdio.h>
int Addition(int no1, int no2)  //shop
{int sum = 0;
sum = no1 + no2;
return sum;
}

int main()
{
    int value1, value2 = 0;
    int Result = 0;

    printf("enter first number: \n");
    scanf("%d", &value1);            //&location address

    printf("enter second number: \n");
    scanf("%d", &value2);

    Result = Addition(value1,value2);
    printf("Addition is %d", Result);
    return 0;
}
