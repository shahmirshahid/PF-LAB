#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter the number of units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input entered. Please enter a valid non zero integer.\n");
        return 1;
    }
    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 300) {
        bill = (100 * 10) + (units - 100) * 15;
    }
    else if (units <= 500) {
        bill = (100 * 10) + (200 * 15) + (units - 300) * 20;
    }
    else {
        bill = (100 * 10) + (200 * 15) + (200 * 20) + (units - 500) * 25;
    }
    printf("Total Bill: PKR %d\n", bill);
    return 0;
}
