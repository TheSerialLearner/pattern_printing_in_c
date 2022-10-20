/*
654321
65432
6543
654
65
6
123456
12345
1234
123
12
1
*/

#include <stdio.h>

int main() {
    int l, m, n, j, i, k, input = 6, a, b, c, d;

    for (i = 1; i <= input; i++) { //lines
        for (j = input; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    for (i = 1; i <= input; i++) { //lines
        //k = 
        for (j = 1; j <= input - i + 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    } 
    printf("_end_\n");

    return 0;
}
