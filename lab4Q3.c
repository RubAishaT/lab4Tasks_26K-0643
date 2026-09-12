#include <stdio.h>
#include <math.h>

int main(){

    int quantity;
    int final_package_total;

    printf("1. 1 pizza costs $8\n");
    printf("2. A combo of 2 pizzas costs $15\n");
    printf("3. A package of 3 pizzas costs $21\n");

    printf("Enter the quantity of pizzas you want (1,2,3): ");
    scanf("%d", &quantity);

    if (quantity == 1){
       final_package_total = 8;
    }
    else if(quantity == 2){
        final_package_total = 15;
    }
    else{
        final_package_total = 21;
    }

    printf("The final total package for %d pizzas is $%d", quantity,final_package_total);

    return 0;
}