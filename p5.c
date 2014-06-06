#include <stdio.h>
/* Project Euler Problem 5 */
/* Started May 28 2014 */
/* Brute Force */
int main(int argc, char *argv[]) {
    int i, j, k;
    
    i = 2520;
    for (;;) {
        i++;
        k = 0;
        for (j = 2; j <= 20; j++) {
            k = k + (i % j);
        }
        if (k == 0) {
            printf("%d", i);
            return 0;
        }
    }
}