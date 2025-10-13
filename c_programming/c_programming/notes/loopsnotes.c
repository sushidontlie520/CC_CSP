//CC 6th loops and arrays notes in c 

#include <stdio.h> 

    int main(void){
        int nums[] = {12,18,84,25,35,23,45};
        char candy[5][20] = {"skittles", "butterfingers", "reece's", "kitkat", "twix"};
        for(int x = 0; x < 7; x++){
            printf("%d\n", nums[x]);
        }

        for(int i=0; i < 5; i++){
            printf("%s is my fav candy\n", candy[i]); 


        }
         
        for(int num = 1; num < 11; num++){
            printf("%d\n", num);
        }

    
        /*
        while loops
        */
       int goose = 6; 
       int count = 0;
       while(count != goose){
            printf("Duck\n");
            count++;

       }
       printf("Goose"); 

        return 0; 
    }