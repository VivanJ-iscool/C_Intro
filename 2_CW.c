// #include <stdio.h>
// int main(){
//     double cool=3.1415926535897932;
//     int number/*setting up integer variable*/ = 10/*giving value*/;
//     printf("yap yapity yap\n%.16f\n%d", cool, number);
// }


//4 main types of variables- integers, floats, doubles and characters

//double- numbers w/ more than 8 decimal places

//char- one character prints; not more since that's a string



// #include <stdio.h>
// int main() {
//     int ageLearnedToRide = 5;
//     printf("I was %d years old when I learned to ride a bike.", ageLearnedToRide);
//     printf("\nI hope I still remember how to ride.");
// }


#include <stdio.h>
int main(){
    int numOfBooks=19;
    char favLetter='o';
    char favDigit='5';
    double costOfCandyBar=1.25;
    printf("Number of books: %d\n", numOfBooks);
    printf("Your Favorite Letter is: %c\n", favLetter);
    printf("Your Favorite Digit is: %c\n", favDigit);
    printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
}
