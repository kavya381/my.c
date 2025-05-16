#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[5];
    int i;
    printf("Enter information of 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        scanf("%d", &e[i].id);
        printf("Enter Name: ");
        scanf(" %s", e[i].name);
        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }
    int sum=0,avg; 
    for(i=0;i<3;i++){
        sum=sum+e[i].salary;
    }
    avg=sum/3;
    printf("\n average salary of employees is %d",avg);
    }
