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



// #include <stdio.h>
// int main(){
//     //Modify following variable value assending value until something odd pops out
//     int numOfLoops = 5000;
//     float a = 0.1f;
//     double c = 1.2334532213344533987;
//     float b = 0;
//     double x = 0.1;
//     double y = 0;
//     printf("At the start, our target float b is: %f\n", b);
//     printf("At the start, our target double y is: %f\n", y);
//     printf("A long decimal is %.19f\n", c);
//     //basically, this code adds .1 to b & y each loop

//     int i = 0;
//     for(i; i<numOfLoops /*<-- same as i<10*/; i++)
//     {
//         b+=a; //a is 0.1; adds 0.1 to b each run
//         y+=x; //x is 0.1; adds 0.1 to y each run
//     }

//     printf("At the end, our target float b is:%f\n", b);
//     printf("At the end, our target double y is:%f\n", y);

// }



//Testing changable variables:
    // int a; /*(no value atm)*/
    // int b = 10;
    // a = b;   /*a will equal 10, which is b*/

    // b = 20;  /*a will still equal to 10 b/c this b statement was applied after a=b */
    // a = 25;  /*NOW the variable a will be changed */




// #include <stdio.h>
// int main(){
//     char bookVersionReview = 'A';
//     char movieVersionReview = 'B';
//     double ticketPrice = 10.25;
//     double bookPrice = 19.99;

//     movieVersionReview = bookVersionReview;
//     ticketPrice=bookPrice;

//     printf("The Book version has a review of %c, whilst the cost is $%.2f.\n", bookVersionReview, bookPrice);
//     printf("It seems this movie is a hit! The movie's rating is %c, whilst due to demand in recent movies, the cost of this movie is a whopping $%.2f!\n", movieVersionReview, ticketPrice);

// }

// #include <stdio.h>

// int main(){
//     // const int FINAL_GRADE/*name has to be in all caps when using constants*/ = 84;
//     // printf("My grade was pretty solid for Careers with an %d\n", FINAL_GRADE);
//     double SPEED_OF_LIGHT=1.86;
//     int time_traveled_inSeconds=30;
//     printf("Light would travel at %.2f in %d seconds!\n", SPEED_OF_LIGHT * 100000 * time_traveled_inSeconds, time_traveled_inSeconds);

// }


// #include <stdio.h>
// int main(){
//     char targetChar;
//     int sourceInt = 99;
//     double sourceDouble = 55.67;
// // Cast here
//     targetChar=(char)sourceDouble;
// }
    
// // No need to change below here
//     printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

// }


// #include <stdio.h>
// int main(){
//     int x = 1;
//     char y = 'c';
//     x = int(y);
//     printf("%d is cool\n", x);

// }




//VARIABLES QUIZ

//1. a

//2. c

//3. 

//4. b

//5. False

//6. char

//7. d

//8. c

//9. a

//10. b






//Project: Grocery Store

#include <stdio.h>
int main(){
    int applequantity = 23;
    double apple_prices = 1.49;
    double appleReview = 82.5;
    int appleReviewDisplay;
    const char APPLE_LOCATION = 'F';
    appleReviewDisplay = (int)appleReview;
    printf("This is the amount of apples in stock: %d\nThese are the apple prices: %.2f\nOur apples have an amazing review of %d\nFinally, here is where you can find our premieme apples: %.2c", applequantity, apple_prices, appleReviewDisplay, APPLE_LOCATION);
}
