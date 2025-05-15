#include<stdio.h>
int main(){
    int num=5;
    int *ptr=&num;
    printf("value of address num %p\n",ptr);
    printf("enter the value of num %d\n",*ptr);
    return 0;
} 
o/p
value of address num 0x7ffdf3ff8c64
enter the value of num 5


=== Code Execution Successful ===
