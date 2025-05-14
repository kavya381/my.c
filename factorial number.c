#include<stdio.h>
int main(){
 int i,n,c=1;
 printf("enter the value of n\n");
 scanf("%d",&n);
 if (n==0){
     printf("0");
 }
 else{
   for(i=1;i<=n;i++){
    c*=i; 
   }
printf("%d",c);
 }
}
