#include <stdio.h>

int main(){

    int size;

    printf("1.Small\n");
    printf("2.Medium\n");
    printf("3.Large\n");

    printf("Enter the size of the pizza you want: ");
    scanf("%d", &size);

    if(size == 1){
        printf("Small Selected");
    }
    else if(size == 2){
        printf("Medium Selected");

    }
    else if(size == 3){
        printf("Large Selected");
    }
    else{
        printf("Invalid size");
    }
    

    return 0;
}