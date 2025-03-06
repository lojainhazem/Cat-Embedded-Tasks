#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    printf("Enter num3: ");
    scanf("%f", &num3);
    
    if (num1 > num2 && num1 > num3) {
        printf("the maximum number is num1 \n");
    } else if (num2 >num1 && num2 > num3) {
        printf("the maximum number is num2\n");
    } else if ( num3 >num1 && num3> num2) {
        printf("the maximum number is num3\n");
    } 
    

    return 0;
}