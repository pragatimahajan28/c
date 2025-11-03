// Check if the number is Armstrong or Not

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, rem, sum = 0, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;

}
