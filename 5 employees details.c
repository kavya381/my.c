#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[5];
    int i;
    printf("Enter information of 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name); 
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
