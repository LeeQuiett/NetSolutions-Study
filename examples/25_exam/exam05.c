#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}
