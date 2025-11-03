// Maximum of n numbers using for loop

#include <stdio.h>

int main() {
    int n, i, num, max;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;

    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > max)
            max = num;
    }

    printf("Maximum number = %d\n", max);
    return 0;
}
