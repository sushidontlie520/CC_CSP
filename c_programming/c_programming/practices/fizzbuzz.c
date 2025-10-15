//CC 6th fizzbuzz

#include <stdio.h>

int main() {
    int y = 1;

    while (y < 51) {
        if (y % 3 == 0 && y % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (y % 3 == 0) {
            printf("Fizz\n");
        } else if (y % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", y);
        }
        y++;
    }

    return 0;
}
