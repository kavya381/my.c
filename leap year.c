#include<stdio.h>
int main()
{
    int year;
    printf("enter the value of year");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%4000==0))
    {
        printf("%d is a leap year",year);
    }
        else 
        {
        printf("%d is not a leap year",year);
        }
    }
