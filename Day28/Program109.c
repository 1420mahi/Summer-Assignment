#include <stdio.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book library[2];
    for(int i = 0; i < 2; i++) {
        printf("Enter ID and Title for Book %d: ", i+1);
        scanf("%d %s", &library[i].id, library[i].title);
    }
    printf("\nLibrary Records:\nID\tTitle\n");
    for(int i = 0; i < 2; i++)
        printf("%d\t%s\n", library[i].id, library[i].title);
    return 0;
}