#include <stdio.h>

int main() {
    
    int result;
    
    do{
    printf("enter the result of 3 x 4: ");
    scanf("%d", &result);
  
    
    if (result!=12) {
        printf("tr again \n");
    } 
    }
    while(result!=12);
    
        printf("thank you\n");
 
    return 0;
}