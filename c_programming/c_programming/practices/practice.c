//CC 6th practice

#include <stdio.h>
#include <string.h>

int main(void){
   int length = strlen("Build");
   int correct = true; 
   char word[] = "build"; 
       int i = 0; 
    while (i < length) {
	if (word[i] == guess) {
	   display[i] = guess;
	   correct = true; 
	}
i++;

}
   int guess = strnlen("Build");
if (correct) { 
   int wrongCount = true;
   wrong[wrongCount ] = guess;
   wrongCount++;
   int attemptsLeft = true;
   attemptsLeft--;
   printf("thats wrongg\n");
} else {
   printf("AYYY u got it\n");
}
   int display = true; 
if (strcmp(display, word) == 0) {
	printf("\nu win!!! The answer was: %s\n", word);
	return 0;
  }

printf("u lose!!! The word was: %s\n", word);
return 0;
}