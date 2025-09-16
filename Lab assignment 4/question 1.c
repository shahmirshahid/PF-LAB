#include <stdio.h>

int main() {
    int x, y;
    
    printf("Enter x coordinate (integer): ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input entered. Not an integer.\n");
        return 1;
    }
    printf("Enter y coordinate (integer): ");
    if (scanf("%d", &y) != 1) {
        printf("Invalid input entered. Not an integer.\n");
        return 1;
    }
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant I\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant II\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant III\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant IV\n", x, y);
    }
    else {
        printf("The point (%d, %d) lies on the axis\n", x, y);
    }
    return 0;
}
