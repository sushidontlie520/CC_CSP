//CC 6th silly sentnence
#include <stdio.h>

int main(void){
    char animal[30];
    char place[30];
    char food[30];

    printf("Give me an animal: ");
    scanf("%s", animal);

    printf("Give me a place: ");
    scanf("%s", place);

    printf("Give me a food: ");
    scanf("%s", food);

    printf("one day, a %s went to a %s to eat some delicious %s.\n", animal, place, food);  
}



    return 0;
}