#include<stdio.h>
int main(){
    int arr[10]={1,4,3,2,2},i;
    int *kavya=arr;
    for(i=0;i<5;i++){
        printf("%d\n",*(kavya+i));
        printf("%p\n",kavya);
    }
}
