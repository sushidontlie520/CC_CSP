//CC 6th first program in c

#include <stdio.h>

int main(void){
    //declare variable to store user's name
    char name[55];

    //ask for the user's name
    printf("What is your name?: ");

    fgets(name, sizeof(name), stdin);

    printf("Hi %s", name);
    return 0;
}