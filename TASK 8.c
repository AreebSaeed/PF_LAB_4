#include <stdio.h>

int main() 
{
    int hour;
    
    printf("Enter the hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 5 && hour < 12) {
        printf("Good Morning\n");
    } else if (hour >= 12 && hour < 19) {
        printf("Good Evening\n");
    } else if (hour >= 19 && hour < 24) {
        printf("Good Night\n");
    }

    return 0;
}

