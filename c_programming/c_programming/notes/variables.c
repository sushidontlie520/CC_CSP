// CC 6th Variables Notes
#include <stdio.h>

int main(void){
    int num;
    float pi = 3.14;
    char grade; //Will only hold one letter
    char name[20]; 
    //bool passing = true;
    printf("What is your letter grade?: ");
    scanf("%c", &grade); 


    printf("What is a number?: ");
    scanf("%d", &num); 
    // this imput lets me get space 
    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);

    printf("%d\n", num);    
    printf("%s has a %c grade in the class!\n", name, grade);
    return 0;
}

//static is data types for variables don't change num="4" 
//half as much work
//python has a dynamic


//Q: What is the main differnce between declaring variables in Python and C?
//A: In C you have to specify and tell C what type of information will be used. 

//Q: In C, what is the purpose of specifying a data type when declaring a variable?
//A: The purpose of specifying the data type is 

//Q: List three common data types used in C and their corresponding format specifiers for printf().
//A: the three common data types used in C are: and their correspodninh format specificers for printf() include:

//Q: How do you declare and initialize an integer variable named "age" with the value 25 in C?
//A: 

//Q: What is the difference between printf() and scanf() functions in C?
//A: 

//Q: How do you add comments in C?
//A: You can add them by:         or "//text"
/*
text
*/

//Q: What is the purpose of the #include <stdio.h> line at the beginning of a C program?
//A: 

//Q: In C, what is the significance of the main() function?
//A: 

//Q: What is the difference between %d and %f format specifiers in printf()?
//A: 

//Q: How do you print a newline character in C?
//A: 

//Q: What is the purpose of the & symbol when using scanf() to get user input?
//A: 

//Q: How do you declare a constant in C? Provide an example.
//A: 

//int is d float is f double is if char is c and list of characters for a string is s 