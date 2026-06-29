#include <stdio.h>

struct Product {
    int id;
    char name[30];
    int qty;
};

int main() {
    struct Product inv[10];
    int count = 0, choice, i;

    do {
        printf("\n--- Inventory System ---\n1. Add Product\n2. View Inventory\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if(choice == 1 && count < 10) {
            printf("Enter ID, Name, Qty: ");
            scanf("%d %s %d", &inv[count].id, inv[count].name, &inv[count].qty);
            count++;
        } else if(choice == 2) {
            for(i = 0; i < count; i++)
                printf("ID: %d | Name: %s | Qty: %d\n", inv[i].id, inv[i].name, inv[i].qty);
        }
    } while(choice != 3);

    return 0;
}