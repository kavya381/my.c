#include<stdio.h>
float calculate_average(int arr[],int size){
    int sum=0;
    for (int i=0; i< size; i++){
        sum+=arr[i];
    }
    return (float)sum/size;
}
int main(){
    int numbers[]={10,20,30,40,50};
    int size=sizeof(numbers) /sizeof(numbers[0]);
    float avg=calculate_average(numbers,size);
    printf("average=%.2f\n",avg);
    return 0;
}
