#include <stdio.h>

int main() {
    int seats[5] = {0, 0, 0, 0, 0}, s_num;
    printf("Enter seat number to book (1-5): ");
    scanf("%d", &s_num);

    if(s_num > 0 && s_num <= 5 && seats[s_num-1] == 0) {
        seats[s_num-1] = 1;
        printf("Seat %d booked successfully!\n", s_num);
    } else {
        printf("Seat unavailable or invalid.\n");
    }
    return 0;
}