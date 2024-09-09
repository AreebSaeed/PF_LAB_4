#include <stdio.h>

int main() {
    int LSvalue ;

    printf("Enter the light sensor value (0-1000): ");
    scanf("%d", &LSvalue);

    if (LSvalue > 500) {
        printf("Sunshine\n");
    } else if (LSvalue >= 100 && LSvalue <= 500) {
        printf("Lighting\n");
    } else if (LSvalue >= 0 && LSvalue < 100) {
        printf("Evening\n");
    } else {
        printf("Invalid light sensor value\n");
    }

    return 0;
}

