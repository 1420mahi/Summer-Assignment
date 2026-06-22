#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Programming";
    char ch;
    int i, count = 0;

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}