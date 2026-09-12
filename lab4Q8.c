#include <stdio.h>

int main(){

    int quantity;
    int crust;

    printf("Enter the quantity of the pizzas you want: ");
    scanf("%d", &quantity);

    printf("1. Regular crust\n");
    printf("2. Thin crust\n");
    printf("3. Stuffed crust\n");

    printf("Enter the crust num: ");
    scanf("%d", &crust);

    if (quantity == 3 && crust == 3){
        printf("You get a free garlic bread!");
    }
    else{
        printf("Thankyou for your order!");
    }


    return 0;
}