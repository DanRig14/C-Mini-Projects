#include <stdio.h>

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
    printf("What is the price for each?: ");
    scanf("%f", &price);
    printf("How many are you buying?: ");
    scanf("%d", &quantity);


    return 0;
}