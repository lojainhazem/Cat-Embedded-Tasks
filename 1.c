#include <stdio.h>

int Get_Max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = Get_Max(num1, num2);
    printf("The maximum number is: %d\n", max);

    return 0;
}