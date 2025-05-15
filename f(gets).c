#include<stdio.h>
#include<string.h>
int i,n;
int fun(char arr[n]){
    for(i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}
int main(){
    char arr[]={"kavya"};
    n=strlen(arr);
    int res=fun(arr);
}
