#include <stdio.h>

int main() {
    int id;
    
    printf("Enter a ID: ");
    scanf("%d", &id);

   
    if (id==1234) {
        printf("your name is Harry");
    }
    else if(id==5678)   {
        printf("your name is Ron");
    }
    else if(id==1145)   {
        printf("your name is Hermione");
    }
    else{
        printf("Wrong ID");
    }

    return 0;
}