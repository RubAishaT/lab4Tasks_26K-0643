#include <stdio.h>


int main(){

    int size;
    int quantity;
    int crust;
    char Extra_cheese;
    int current_hour;
    float final_package_total; 
    float discount;
    float discounted_total;
    char StudentID_Status;
    int option;

    printf("WELCOME TO THE SLICE & DICE PIZZA PALACE\n");
    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);

    printf("How many pizzas(1-3): ");
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

    printf("Select crust (1.Regular,2.Thin,3.Stuffed): ");
    scanf(" %d", &crust);

    switch(crust){

        case 1:
            final_package_total = final_package_total;
            break;

        case 2:
            final_package_total = final_package_total + 1;
            break;
        case 3:
            final_package_total = final_package_total + 2;
            break;

    } 
            

    printf("Extra cheese(Y/N): ");
    scanf(" %c", &Extra_cheese);

    if (Extra_cheese == 'Y'  || Extra_cheese == 'y'){
        final_package_total = final_package_total + 1.50;
        printf("Updated total is $%.1f",final_package_total);
    }
    else if (Extra_cheese == 'N' || Extra_cheese == 'n'){
        printf("Total is $%.1f", final_package_total);
    }
    else{
        printf("Not Valid Reply!");
    }


    printf("\nEnter current hour(0-23): ");
    scanf("%d", &current_hour);

    
    if (current_hour >= 11 && current_hour <= 14){
        discount = final_package_total * 0.10;
        final_package_total = final_package_total - discount;
        printf("You new total after discount is %.2f",final_package_total);
    }
    else{
        printf("Your total bill is %.2f",final_package_total);
    }


    printf("\nIs StudentID status Present(Y/N): " );
    scanf(" %c", &StudentID_Status);

    if(StudentID_Status == 'Y'){
        final_package_total = final_package_total - 2.00;
    }

    if (final_package_total < 0){
        final_package_total = 0.00;
    }

    if (quantity == 3 && crust == 3){
        printf("BONUS: You get a free garlic bread!\n");
    }
    else{
        printf("Thankyou for your order!\n");
    }

    printf("Fulfillment Options!\n");
    printf("1.Pickup\n");
    printf("2.Delivery\n");

    printf("Enter your selected option(1/2): " );
    scanf("%d", &option);

    if (option == 2){
        final_package_total = final_package_total + 3.00;
    }

    printf("Your order total is %.2f\n", final_package_total);


    printf("ORDER RECEIPT\n");
    printf("Pizza Size:%d\n",size);
    printf("Quantity:%d\n",quantity);
    printf("Crust Type:%d\n",crust);
    printf("Extra Cheese:%c\n",Extra_cheese);
    printf("Student ID:%c\n",StudentID_Status);
    printf("Fulfillment:%d\n",option);

    printf("FINAL TOTAL:$%.2f\n",final_package_total);

    printf("Thankyou for dinning with us!\n");
    printf("Have a slice-tastic day!");

    return 0;
}


    