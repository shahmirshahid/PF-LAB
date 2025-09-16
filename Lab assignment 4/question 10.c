#include <stdio.h>
#include <math.h>
int main() {
    int akhlaq, honesty, prayer, fasting, zakat, social, conflict;
    float CI;

    printf("Enter the Akhlaq & Manners score (0–10): ");
    if (scanf("%d", &akhlaq) != 1 || akhlaq < 0 || akhlaq > 10) {
        printf("Invalid input for Akhlaq.\n");
        return 1;
    }
    printf("Enter the Honesty & Trustworthiness score (0–10): ");
    if (scanf("%d", &honesty) != 1 || honesty < 0 || honesty > 10) {
        printf("Invalid input for Honesty.\n");
        return 1;
    }
    printf("Enter the Prayer Regularity (0 = Irregular, 1 = Regular): ");
    if (scanf("%d", &prayer) != 1 || (prayer != 0 && prayer != 1)) {
        printf("Invalid input for Prayer.\n");
        return 1;
    }
    printf("Enter Fasting (0 = Never, 1 = Sometimes, 2 = Always): ");
    if (scanf("%d", &fasting) != 1 || fasting < 0 || fasting > 2) {
        printf("Invalid input for Fasting.\n");
        return 1;
    }
    printf("Enter Zakat & Charity score (0–10): ");
    if (scanf("%d", &zakat) != 1 || zakat < 0 || zakat > 10) {
        printf("Invalid input for Zakat.\n");
        return 1;
    }
    printf("Enter Social Behavior score (0–10): ");
    if (scanf("%d", &social) != 1 || social < 0 || social > 10) {
        printf("Invalid input for Social Behavior.\n");
        return 1;
    }
    printf("Enter Conflict Resolution Skills score (0–10): ");
    if (scanf("%d", &conflict) != 1 || conflict < 0 || conflict > 10) {
        printf("Invalid input for Conflict Resolution.\n");
        return 1;
    }
    CI = (akhlaq * 2.5) + (honesty * 2.0) + (prayer * 15) +
         (fasting * 5) + (zakat * 1.0) + (social * 1.0) + (conflict * 1.0);
         
    printf("\nCharacter Index (CI): %f / 100\n", CI);
    if (CI >= 85 && CI <= 100) {
        printf("Classification: Excellent Muslim Character\n");
        printf("Remarks: Role model for society\n");
    }
    else if (CI >= 70 && CI <= 84) {
        printf("Classification: Good Muslim Character\n");
        printf("Remarks: Practicing believer\n");
    }
    else if (CI >= 50 && CI <= 69) {
        printf("Classification: Average Character\n");
        printf("Remarks: Needs minor improvement\n");
    }
    else if (CI >= 30 && CI <= 49) {
        printf("Classification: Needs Improvement\n");
        printf("Remarks: Work on Akhlaq & Ibadah\n");
    }
    else {
        printf("Classification: Weak Character\n");
        printf("Remarks: Requires serious guidance\n");
    }
    return 0;
}
