//CC 6th strings notes 

#include <stdio.h>
#include <string.h>

int main(void){
 char name[100] = "Charlie";
    char last_name[100]; 
    char full_name[200] = ""; // Initialize full_name to an empty string

    printf("Please enter ur last name: \n");
    scanf("%s", last_name);

    strcat(full_name, " ");
    printf("[%s]", full_name);
    strcat(full_name, last_name);
    printf("[%s]", full_name);

    printf("%zu", strlen(full_name));
    printf("%zu", sizeof(full_name));

   
   
    return 0;


}

   