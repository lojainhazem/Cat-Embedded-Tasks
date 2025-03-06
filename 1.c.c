#include <stdio.h>

int main() {
    int hours;
    float salary;
    const float rate = 50.0; 
    
    printf("Enter working hours: ");
    scanf("%d", &hours);

   
    salary = hours * rate;

   
    if (hours < 40) {
        salary -= salary * 0.1; 
    }

    printf("Employee salary: %.2f\n", salary);

    return 0;
}