#include<stdio.h>
int main()
{
int n,i,t1=0,t2=1,nxt_term;
printf("enter the value of num");
scanf("%d",&n);
printf("fibonacci series");
for(i=0; i<n; i++)
{
    printf("%d",t1);
    nxt_term=t1+t2;
    t1=t2;
    t2=nxt_term;
}
}
