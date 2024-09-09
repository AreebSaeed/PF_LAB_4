#include <stdio.h>

int main() 
{
    float fscper, ntsper;

    printf("Enter your F.Sc Percentage: ");
    scanf("%f", &fscper);
    printf("Enter your NTS Percentage: ");
    scanf("%f", &ntsper);

    if (fscper > 70) {
        if (ntsper >= 70) {
            printf("Oxford University - IT Department\n");
        } else if (ntsper >= 60) {
            printf("Oxford University - Electronics Department\n");
        } else if (ntsper >= 50) {
            printf("Oxford University - Telecommunication Department\n");
        } else {
            printf("You do not meet the criteria for any department at Oxford University.\n");
        }
    } else if (fscper > 60) {
        if (ntsper >= 50) {
            printf("MIT - IT Department\n");
        } else {
            printf("You do not meet the criteria for IT at MIT.\n");
        }
    } else if (fscper >= 50) {
        if (fscper >= 50 && fscper < 60 && ntsper >= 50) {
            printf("MIT - Chemical Department\n");
        } else if (fscper >= 40 && fscper < 50 && ntsper >= 50) {
            printf("MIT - Computer Department\n");
        } else {
            printf("You do not meet the criteria for any department at MIT.\n");
        }
    } else {
        printf("You do not meet the criteria for any department at Oxford University or MIT.\n");
    }

    return 0;
}

