#include <stdio.h>
int Find_Fact(int nm) {
    int i, Count = 0;
    for (i = 2; i <= nm/2; i++) {
        if(nm%i == 0) {
            Count++;
        }
    }
    return Count;
}
int main(void) {
    int nm, count = 0;
    printf("Please Enter any to Check = ");
    scanf("%d", &nm);
    count = Find_Fact(nm);
    if(count == 0 && nm != 1 ) {
        printf("\n%d is a Prime\n", nm);
    }
    else {
        printf("\n%d is Not", nm);
    }
    return 0;
}