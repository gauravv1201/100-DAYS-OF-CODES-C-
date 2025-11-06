//Write a program to calculate library fine based on late days as follows: 

#include <stdio.h>

int main() {
    int lateDays;
    int fine = 0;

    // Input number of late days
    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    // Calculate fine based on late days
    if (lateDays <= 0) {
        printf("No fine. Book returned on time.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine = ₹%d\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Fine = ₹%d\n", fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Fine = ₹%d\n", fine);
    } else {
        printf("Membership Cancelled due to excessive delay.\n");
    }

    return 0;
}