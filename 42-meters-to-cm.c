#include <stdio.h>

int main() {
    float meters, cm;

    printf("Enter distance in meters: ");
    scanf("%f", &meters);

    
    cm = meters * 100;

    printf("%.2f Meters = %.2f Centimeters\n", meters, cm);

    return 0;
}
