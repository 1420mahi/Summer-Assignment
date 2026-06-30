#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

int main() {
    struct Employee staff = {1001, "John Doe", 55000.50};
    printf("--- Employee Detail ---\n");
    printf("ID: %d\nName: %s\nSalary: $%.2f\n", staff.id, staff.name, staff.salary);
    return 0;
}