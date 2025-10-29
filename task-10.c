#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf(" "); 
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        for (j = i; j < n; j++)
            printf(" "); 
            printf(" | "); 
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("%d", j);
        for (j = i; j < n; j++)
            printf(" ");
        printf(" | ");
        for (j = i; j < n; j++)
            printf(" ");
        for (k = 0; k < (2 * i - 1); k++)
            printf("%c", 'A' + k);
        for (j = i; j < n; j++)
            printf(" ");

        printf("\n");
    }

    return 0;
}

