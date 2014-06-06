#include <stdio.h>

int main(int argc, char *argv[]) {
    int sum1, sum2, i, j;
    
    for (i = 1; i < 101; i++) {
        sum1 = sum1 + i * i;
        sum2 = sum2 + i;
    }
    printf("%d", sum2 * sum2 - sum1);
}