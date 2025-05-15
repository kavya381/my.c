#include<stdio.h>
#include<string.h>
int main(){
    char name[7];
    printf("enter your name");
scanf("%s",&name);
printf("%s\n",name);
int length=strlen(name);
printf("%d\n",length);
strcpy(name,"navya");
printf("%s\n",name);
int comp=strcmp("kavya","kavyamp");
printf("%d\n",comp);
strcat(name,"coder");
printf("%s\n",name);
}
