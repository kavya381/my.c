#include<stdio.h>
int main(){
int num,reversed=0,remainder,original;
printf("enter the value of num\n");
scanf("%d",&num);
original=num;
while(num!=0){
    remainder=num%10;
    reversed=reversed*10+remainder;
    num/=10;
}
if(original==reversed){
    printf("%d\n is a palindrome",original);
}    
else {
    printf("%d\n is not a palindrome",original);
}
}
