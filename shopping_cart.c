#include <stdio.h>
#include <string.h>

int main(){
    //variables
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    //questions and user input
    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many are you buying?: ");
    scanf("%d", &quantity);

     //calcuate total cost
    total = price  *quantity;
    printf("\nYou have bought %d %s/s\n", quantity, item);
    printf("Total Price:  %c%.2f", currency, total);

    return 0;
}