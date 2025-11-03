// Area and perimeter of circle, square, and rectangle.

#include <stdio.h>

int main() {
    float radius, side, length, breadth;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of Circle = %.2f\n", 3.14 * radius * radius);
    printf("Perimeter of Circle = %.2f\n\n", 2 * 3.14 * radius);

    // Square
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area of Square = %.2f\n", side * side);
    printf("Perimeter of Square = %.2f\n\n", 4 * side);

    // Rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area of Rectangle = %.2f\n", length * breadth);
    printf("Perimeter of Rectangle = %.2f\n", 2 * (length + breadth));

    return 0;
} 
