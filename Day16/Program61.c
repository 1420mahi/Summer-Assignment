#include <stdio.h>

int main()
{
    int n, i, sum = 0, total = 0;
    int arr[100];

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers (one number missing):\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}