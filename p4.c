#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, m, j, k[6], counter;
    int flag; 
    int big;
    
    big = 0;
    
    for (i = 0; i < 6; i++) {
        k[i] = -1;
    }
    for (m = 999; m > 99; m--) {
    for (i = 999; i > 99; i--) {
        flag = 0;
        j = i * m;
        counter = 0;
        while (j > 0) {
            k[counter] = j % 10;
            counter++;
            j = j / 10;
            //printf("J is %d \n", j);
        }
            //printf("%d \n", counter);
            
            // now check if the number is a palindrome
        for (j = 0; j < 3; j++) {
            if (k[j] != k[counter - j - 1]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            if ((i * m) > big) {
                big = i * m;
            }
        }    
    }
    }
    
    printf("found: %d", big);
                return 0;
}