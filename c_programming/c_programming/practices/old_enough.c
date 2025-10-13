//CC 6th old enough practice
#include <stdio.h>
#include <string.h>
 int main(void){

    int age;
    char name[10000];
     printf("What is ur age??: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Please enter a real age.\n");
    } else if (age >= 18) {
        printf("You can vote!\n");
    } else if (age >= 16) {
        printf("You can drive!\n");
    } else if (age >= 15) {
        printf("You can get ur permit!\n");
    } else if (age >= 6) {
        printf("You can go to school!\n");
    } else {
        printf("You cant do any of these.\n");
    }

    return 0; 
}