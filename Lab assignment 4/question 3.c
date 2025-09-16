#include <stdio.h>
int main() {
    float waterlevel;

    printf("Enter the water level in feet: ");
    if (scanf("%f", &waterlevel) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    if (waterlevel < 2) {
        printf("No Relief is Required\n");
    }
    else if (waterlevel >= 2 && waterlevel <= 4) {
        printf("Small Relief Package required.\n");
    }
    else if (waterlevel > 4 && waterlevel <= 6) {
        printf("Medium Relief Package required.\n");
    }
    else { 
        printf("Evacuation Required\n");
    }

    return 0;
}
