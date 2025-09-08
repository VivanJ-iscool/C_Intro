/*COIN FLIP DEMO*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     // Create a number that’s 0 or 1
//     srand (time(NULL));
//     int coin = rand() % 2; //chooses between remeinder (zero) or nothing
    
//     // If number is 0: Heads
//     // If it is not 0: Tails
    
//     if (coin == 0) {
//         printf("Heads\n");
//     } 
    
//     else {
//     printf("Tails\n");
//     }


// }


/*IF STATEMENTS*/

//if statement in c has brackets after saying "if", with your following condition

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     int grade1 = 90
//     int grade2 = 52
    
//     if (grade1 >= 60){
//         printf("The first person PASS\n")
//     }

//     if (grade2 <= 60){
//         printf("The second person FAILED\n")
//     }
// }


/*WORKING WITH OPERATORS*/
// #include <stdio.h>
// int main() {
    
//     int a = 10;
//     int b = -5;
    
//     if (a > 0 || b > 0) {
//         printf("Positive\n");
//     }

//     if (a > 0 && !(b > 0)){
//         printf("Positive too!\n");
//     }
// }


/*ELSE STATEMENTS*/

// #include <stdio.h>
// int main() {
    
//     int grade1 = 59;
//     int grade2 = 90;
    
//     if (grade1 > 60) {
//         printf("Pass!\n");
//     }
    
//     else {
//         printf("Fail!\n");
//     }

//     if (grade2 > 60){
//         printf("Pass!\n");
//     }
    
//     else {
//         printf("Fail!\n");
//     }

// }


/*ELSE IF STATEMENTS*/

// #include <stdio.h>
// int main() {
//     double ph = 7.9;
    
//     if (ph > 7) {
//         printf("Basic\n");
//         ph = 4.6; //when doing variable value change, it has to be attached to an if/else if statement
//     } 
//     else if (ph < 7) {
//         printf("Acidic\n");
//         ph = 7.0; // same applys here
//     }
//     else {
//         printf("Neutral");
//     }

// }


/*SWITCH STATEMENTS*/
// #include <stdio.h>
// int main() {
//     int number = 7;
//     switch(number) {
//         case 1:
//             printf("Bulbasaur\n");
//             break;

//         case 2:
//             printf("Ivysaur\n");
//             break;

//         case 3:
//             printf("Venusaur\n");
//             break;
        
//         case 4:
//             printf("Charmander\n");
//             break;
        
//         case 5:
//             printf("Charmeleon\n");
//             break;
        
//         case 6:
//             printf("Charizard\n");
//             break;

//         case 7:
//             printf("Squirtle\n");

//         case 8:
//             printf("Wartortle");
//             break;

//         case 9:
//             printf("Blastoise\n");
//             break;
        
//         default:
//             printf("Unknown\n");
//             break;
//         }
// }


//TERNARY OPERATORS (Shortcut for if or else statements)

// #include <stdio.h>
// int main(){
//     int a = 4;
//     int b = 9;
//     int min;
//     min = a < b ? a : b;
//     printf("%d",min);
// }


//QUIZ

//Project
#include <stdio.h>
int main (){
    int month = 9;
    
    switch (month){
        case 1:
            printf("January");
            break;

        case 2:
            printf("February");
            break;

        case 3:
            printf("March");
            break;

        case 4:
            printf("April");
            break;

        case 5:
            printf("May");
            break;

        case 6:
            printf("June");
            break;

        case 7:
            printf("July");
            break;

        case 8:
            printf("Augest");
            break;

        case 9:
            printf("September");
            break;

        case 10:
            printf("October");
            break;

        case 11:
            printf("November");
            break;

        case 12:
            printf("December");
            break;

        default:
            printf("Invalid month");
            break;
    }

}
