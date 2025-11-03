// Area of circle, square, and rectangle based on user choice.

#include <stdio.h>

int main() {
    int choice;
    float radius, side, length, breadth, area;

    printf("Choose an option:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter side length: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        case 3:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
} 
