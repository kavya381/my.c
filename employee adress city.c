#include <stdio.h>
struct Address {
    char city[50];
    int pin;
};
struct Employee {
    int id;
    char name[100];
    struct Address address;
};

int main() {
    struct Employee emp1;
    emp1.id = 101;
    snprintf(emp1.name, sizeof(emp1.name), "John Doe");
    snprintf(emp1.address.city, sizeof(emp1.address.city), "New York");
    emp1.address.pin = 10001;
    printf("Employee ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("City: %s\n", emp1.address.city);
    printf("PIN: %d\n", emp1.address.pin);
}
