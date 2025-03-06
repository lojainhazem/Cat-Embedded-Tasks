#include <stdio.h>

int main() {
    int i, num, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        sum += num;
    }

    average = sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}