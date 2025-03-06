#include <stdio.h>

int main() {
    float grade;

    printf("Enter your grade percentage: ");
    scanf("%f", &grade);

    
    if (grade >= 90 && grade <= 100) {
        printf("Excellent\n");
    } else if (grade >= 80 && grade < 90) {
        printf("Very Good\n");
    } else if (grade >= 70 && grade < 80) {
        printf("Good\n");
    } else if (grade >= 60 && grade < 70) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}