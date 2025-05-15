#include<stdio.h>
 #include<math.h>
int main(){
    int num,remainder,result=0,original;
printf("enter the value of num\n");
scanf("%d",&num);
original=num;
while(num!=0){
    remainder=num%10;
    result+=remainder*remainder*remainder;
    num/=10;
}
if(original==result){
    printf("%d\n is armstrong",original);
}    
else {
    printf("%d\n is not a armstrong",original);
}
}
