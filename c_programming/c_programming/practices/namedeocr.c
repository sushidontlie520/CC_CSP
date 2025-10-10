//CC 6th name decorator 
#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    char decoration[] = "<<< ";
    char end_decoration[] = " >>>";
    char decorated_name[2000];

    printf("please enter ur name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character from fgets
    name[strcspn(name, "\n")] = 0;

    // Concatenate decorations and name
    strcpy(decorated_name, decoration);
    strcat(decorated_name, name);
    strcat(decorated_name, end_decoration);

    // Print the decorated name
    printf("%s\n", decorated_name);

    return 0;
}