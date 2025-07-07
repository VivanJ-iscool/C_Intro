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


// #include <stdio.h>
// int main(){
//     int numOfBooks=19;
//     char favLetter='o';
//     char favDigit='5';
//     int favAnime=1;
//     double costOfCandyBar=1.25;
//     printf("Number of books: %d\n", numOfBooks);
//     printf("My favourite anime, demon slayer, is #%d in my heart\n", favAnime);
//     printf("Your Favorite Letter is: %c\n", favLetter);
//     printf("Your Favorite Digit is: %c\n", favDigit);
//     printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
// }



#include <stdio.h>
int main(){
    //Modify following variable value assending value until something odd pops out
    int numOfLoops = 10;
    float a = 0.1f;
    float b = 0;
    double x = 0.1;
    double y = 0;
    printf("At the start, our target float b is: %f\n", b);
    printf("At the start, our target double y is: %f\n", y);
    //basically, this code adds .1 to b & y each loop

    int i = 0;
    for(i; i<numOfLoops; i++)
    {
        b+=a; //a is 0.1; adds 0.1 to b each run
        y+=x; //x is 0.1; adds 0.1 to y each run
    }

    printf("At the end, our target float b is:%f\n", b);
    printf("At the end, our target double y is:%f\n", y);

}
