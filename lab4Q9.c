#include <stdio.h>

int main(){

    float order_total;
    int option;

    printf("Enter the order total: ");
    scanf("%f", &order_total);

    printf("Fulfillment Options!\n");
    printf("1.Pickup\n");
    printf("2.Delivery\n");

    printf("Enter your selected option(1/2): " );
    scanf("%d", &option);

    if (option == 2){
        order_total = order_total + 3.00;
    }

    printf("Your order total is %.2f", order_total);


    return 0;
}