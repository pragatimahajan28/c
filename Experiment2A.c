// Arithmetic operations using additions, subtraction, multiplication, and remainder operations.

#include <stdio.h>
int main() {
    int a, b;
    
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    
    printf("\nResults\n");
    printf("Addition: %d \n", a+b);
    printf("Subtraction: %d \n", a-b);
    printf("Multiplication: %d \n", a*b);
    printf("Division: %d \n", a/b);
    printf("Reminder: %d \n", a%b);
    
    return 0;
}   
