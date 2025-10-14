// CC 6th functions notes

#include <stdio.h>

void birthday(char* name, int age){
    printf("Happy birthday to u\n");
    printf("Happy birthday to u\n");
    printf("Happy birthday dear %s\n", name);
    printf("Happy birthday to u\n");
    printf("Happy birthday %s is now %d\n", name, age);

}

int add(int num_one, int num_two){
    return num_one + num_two;
}

char* get_name(void) {
    static char name[100];
    printf("what is ur name: ");
    scanf("%s", name);
    return name;
}


int main(void){
    birthday("Mykel", 65);
    char* user = get_name();
    birthday(user, 67);
    int addition = add(5,4);
    birthday(user, 67);
    addition = add(5,4);
    printf("%d\n", addition);
    printf("%d\n", add(50,37));

    return 0; 
}