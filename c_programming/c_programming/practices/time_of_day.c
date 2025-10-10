//CC 6th time of day practice
#include <stdio.h>
#include <string.h>

int main(void){
    int time;
    char name[1000];
    printf("What is the time in military form without colons??: ");
    scanf("%d", &time);

        if (time >= 0000) {
        printf("Good morningg!\n");
     } else if (time >= 1200) {
        printf("Good afternoon!\n");
    } else if (time >= 1800 ) {
        printf("Good evening!\n");  
    } else if (time >= 2100 ) {
        printf("Good night!\n");
    } else {
        printf("Please enter a real time.\n");
    }


    return 0; 
}
