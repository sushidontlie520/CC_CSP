//CC 6th updated hello world 

#include <stdio.h>

void hello(char* name){
    printf("hello %s\n", name);

}

int main(void){
    hello("Charlie");
    hello("Ms LaRose");
    hello("computer");
    hello("dog");
    hello("cat");

    return 0; 
}