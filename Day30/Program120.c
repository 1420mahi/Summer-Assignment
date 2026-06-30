#include <stdio.h>
#include <string.h>

#define MAX 50

struct Project {
    int id;
    char task[MAX];
};

void addTask(struct Project p[], int *count) {
    printf("Enter Task ID: ");
    scanf("%d", &p[*count].id);
    printf("Enter Task Description: ");
    scanf(" %[^\n]s", p[*count].task);
    (*count)++;
}

void viewTasks(struct Project p[], int count) {
    printf("\n--- Task List ---\n");
    for(int i = 0; i < count; i++)
        printf("[%d] %s\n", p[i].id, p[i].task);
}

int main() {
    struct Project list[10];
    int count = 0, choice;
    do {
        printf("\n1. Add Task\n2. View Tasks\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if(choice == 1) addTask(list, &count);
        else if(choice == 2) viewTasks(list, count);
    } while(choice != 3);
    return 0;
}