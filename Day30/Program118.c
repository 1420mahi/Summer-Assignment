#include <stdio.h>

struct Book {
    int id;
    char title[100];
    char author[50];
};

void showLibrary(struct Book b[], int n) {
    for(int i = 0; i < n; i++) {
        printf("ID: %d | '%s' by %s\n", b[i].id, b[i].title, b[i].author);
    }
}

int main() {
    struct Book library[2] = {{1, "C Programming", "Dennis Ritchie"}, {2, "Data Structures", "Lipschutz"}};
    printf("--- Library Books ---\n");
    showLibrary(library, 2);
    return 0;
}