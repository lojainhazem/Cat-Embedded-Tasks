#include <stdio.h>

int main() {
    int id, password, tries = 0;
    printf("Enter your ID: ");
    scanf("%d", &id);
    
    if (id == 1234 || id == 5678  || id == 1145) {
        while (tries < 3) { 
            printf("Enter your password: ");
            scanf("%d", &password);

            if ((id == 1234 && password == 1111) ||
                (id == 5678 && password == 2222) ||
                (id == 1145 && password == 3333)) {
                printf("Welcome!\n");
                return 0;
            } else {
                printf("Wrong password, try again.\n");
                tries++;
            }
        }
        printf("No more tries\n");
    } else {
        printf("You are not registered\n"); 
    }

    return 0;
}