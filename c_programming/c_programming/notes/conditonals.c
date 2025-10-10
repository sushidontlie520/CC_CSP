//CC 6th conditionals notes

#include <stdio.h>
#include <string.h> 
int main(void){
    int grade;
    char name[50];
    printf("enter ur name: ");
    scanf("%s", name);
    printf("enter ur grade: ");
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("You got an A!\n");
     } else if (grade >= 80) {
        printf("You got a B!\n");
    } else if (grade >= 70) {
        printf("You got a C!\n");
    } else if (grade >= 60) {
        printf("You got a D!\n");
    } else {
        printf("You got an F!\n");
    }


    return 0; 
}