#include <stdio.h>
#include <math.h>


int main(){

    float total;
    char Extra_cheese;

    printf("Enter the current order total: ");
    scanf("%f", &total);

    printf("Do you want extra cheese (Y/N): ");
    scanf("%s" , &Extra_cheese);

    if (Extra_cheese == 'Y'  || Extra_cheese == 'y'){
        total = total + 1.50;
        printf("Updated total is $%.1f",total);
    }
    else if (Extra_cheese == 'N' || Extra_cheese == 'n'){
        printf("Total is $%.1f", total);
    }
    else{
        printf("Not Valid Reply!");
    }

    return 0;
}