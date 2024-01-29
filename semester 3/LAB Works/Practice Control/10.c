#include <stdio.h>

void daysInMonth(int month) {
    switch (month) {
        case 2:
            printf("28 or 29 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }
}

int main() {
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);
    daysInMonth(month);
    return 0;
}
