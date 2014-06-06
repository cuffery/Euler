#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE (9.0f / 5.0f)

int main(int argc, char *argv[]) {
    float fahrenheit, celsius;
    
    printf("Enter Celsius temperature: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * SCALE + FREEZING_PT;
    printf("Fahrenheit equivalent is: %.2f\n", fahrenheit);
    
    return 0;
}