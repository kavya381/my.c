#include<stdio.h>
#include<string.h>
int main(){
int x=10;
int*ptr=&x;
printf(" enter the value of x %d\n",x);
printf("enter the value of ptr %d\n",x);
*ptr=20;
printf("the value of %d\n",*ptr);
}
