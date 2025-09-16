#include <stdio.h>

int main() {
    float rainfall, riverflow;

    printf("Enter amount of rainfall in mm: ");
    if (scanf("%f", &rainfall) != 1 || rainfall < 0) {
        printf("Invalid input entered. Rainfall must be a non-negative number.\n");
        return 1;
    }
    printf("Enter the river flow in m^3/s: ");
    if (scanf("%f", &riverflow) != 1 || riverflow < 0) {
        printf("Invalid input! River flow must be a non-negative number.\n");
        return 1;
    }
    if (rainfall < 50 && riverflow < 200) {
        printf("Risk Level: Low\n");
    }
    else if (rainfall >= 50 && rainfall <= 100 &&
             riverflow >= 200 && riverflow <= 500) {
        printf("Risk Level: Moderate\n");
    }
    else if (rainfall > 100 && rainfall <= 150 &&
             riverflow > 500 && riverflow <= 800) {
        printf("Risk Level: High\n");
    }
    else if (rainfall > 150 && riverflow > 800) {
        printf("Risk Level: Severe–Evacuate!\n");
    }
    else {
        printf("Risk Level: Data does not match standard risk categories.\n");
    }
    return 0;
}
