#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void displayStudent(struct Student s) {
    printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
}

int main() {
    struct Student list[2] = {{"Alice", 101, 85.5}, {"Bob", 102, 90.0}};
    printf("--- Student Records ---\n");
    for(int i = 0; i < 2; i++) displayStudent(list[i]);
    return 0;
}