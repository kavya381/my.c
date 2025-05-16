#include<stdio.h>
int main(){
  struct kavya{
      char name[10];
      int age;
      float weight;
  };
  struct kavya k1;
  printf("enter the name");
  scanf("%s",&k1.name);
  printf("enter the age");
  scanf("%d",&k1.age);
  printf("enter the weight");
  scanf("%d",&k1.weight);
}
