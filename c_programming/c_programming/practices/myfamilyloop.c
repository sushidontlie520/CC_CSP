//CC 6th family loop

#include <stdio.h>

int main(void){
    const char *family_members[] = {"Mom", "Dad", "Brother", "Pets"};


    int num_members = sizeof(family_members) / sizeof(family_members[0]);

    for (int i = 0; i < num_members; i++) {
        printf("Hello, %s!\n", family_members[i]);
    }

    return 0;
}
