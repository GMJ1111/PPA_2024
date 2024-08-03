#include<stdio.h>
int data = 50;  //Global Variable
int main()
{
    char cvalue = 'A';
    int ivalue = 11;
    float fvalue = 90.78f;   //f lihavach lagta
    double dvalue = 78.123548; 

    printf("%c \n",cvalue);
printf("%d \n",ivalue);
printf("%f \n",fvalue);
printf("%f \n",dvalue);
printf("%d \n",data);

return 0;
}

