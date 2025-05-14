#include <stdio.h>
int main(){
 int arr[10],i,sum=0;
 printf("enter the 10 elements of array");
 for(i=0;i<10;i++)
 {
     scanf("%d",&arr[i]);
     sum=sum+arr[i];
 }
 printf("sum of all array elements is %d",sum);
 return 0;
}
