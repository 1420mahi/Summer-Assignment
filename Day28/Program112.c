#include <stdio.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact c;
    printf("Enter Contact Name: ");
    scanf("%s", c.name);
    printf("Enter Phone: ");
    scanf("%s", c.phone);

    printf("\nSaved Contact: %s - %s\n", c.name, c.phone);
    return 0;
}