//CC 6th upadted financial calculator in c 


#include <stdio.h>
#include <math.h>
    float hello(char* name){
    float number;
    printf("what is ur spending on: %s\n", name);
    scanf("%f", &number);

    return number;
}


int main() {
    
    float income, rent, utilities, groceries, transportation;
    float rent_percent, utilities_percent, groceries_percent, transportation_percent, savings_amount, savings_percent, spending;

    scanf("%f", &transportation);

    rent_percent = (rent/income) * 100;
    utilities_percent = (utilities/income) * 100;
    groceries_percent = (groceries/income) * 100;
    transportation_percent = (transportation/income) * 100;
    savings_percent = 10;
    savings_amount = income * (savings_percent/100);
    spending= income - (rent + utilities + groceries + transportation + savings_amount);

    printf("\nYour rent cost is $%.2f which is %.0f%% of your income.\n", rent, rent_percent);
    printf("Your utilities cost is $%.2f which is %.0f%% of your income.\n", utilities, utilities_percent);
    printf("Your groceries cost is $%.2f which is %.0f%% of your income.\n", groceries, groceries_percent);
    printf("Your transportation cost is $%.2f which %.0f%% of your income.\n", transportation, transportation_percent);
    printf("\nYou should save $%.2f a month, which is %.0f%% of your income.\n", savings_amount, savings_percent);
    printf("\nYou have $%.2f of spending money each month!\n", spending);

    return 0;
}
