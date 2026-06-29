#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str1);

    do {
        printf("\n--- String Operations ---\n1. Length\n2. Copy\n3. Concatenate\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Length: %lu\n", strlen(str1)); break;
            case 2: 
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;
            case 3:
                printf("Enter string to append: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("New String: %s\n", str1);
                break;
        }
    } while(choice != 4);

    return 0;
}