#include<stdio.h>
int main()
{
double num;
printf("\n\t enter the number\n\t");
scanf("%lf",&num);
if(num < 0)
printf("absolute value of no. %lf is ::%lf",num,num-num*2);
else
printf("absolute value of no. %lf is::%lf ",num,num);
return 0;
}
