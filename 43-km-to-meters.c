#include <stdio.h>

int main() {
    float km, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    
    meters = km * 1000;

    printf("%.2f Kilometers = %.2f Meters\n", km, meters);

    return 0;
}
