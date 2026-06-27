#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks[3];
    float total, percent;
};

int main() {
    struct Student s;
    printf("Enter Name & Roll No: ");
    scanf("%s %d", s.name, &s.roll);
    
    s.total = 0;
    for(int i = 0; i < 3; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        s.total += s.marks[i];
    }
    s.percent = s.total / 3;

    printf("\n--- MARKSHEET ---\nName: %s\nRoll: %d\n", s.name, s.roll);
    printf("Total: %.2f\nPercentage: %.2f%%\n", s.total, s.percent);
    return 0;
}