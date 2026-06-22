#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int count = 0, i = 0;

    printf("Lucknow is Capital of Uttar Pradesh ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

    
        if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1]))) {
            count++;
        }
        i++;
    }

    printf("Total number of words: %d\n", count);

    return 0;
}