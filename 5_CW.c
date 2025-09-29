

// 3 MAIN TYPES OF LOOPS: While Loops,
// Do-While Loops & For Loops

// Interacting with a loop (First Intro Example)

// #include <stdio.h>
// int main(){
//     int pin = 0;
//     int tries = 0;

//     printf("BANK OF CODECADEMY: \n");
//     printf("Enter your PIN: ");
//     scanf("%d", pin);

//     tries++;

//     while (pin != 1234 && tries < 3) {
//         printf("Enter your PIN: ");
//         scanf("%d", &pin); //scanf is considered as an input; basically it allows you to enter something and scans your entered input
//         tries++;
//     }

//     if (pin == 1234){
//         printf("PIN accepted!\n");
//         printf("You now have access.\n");
//     }

// }

// Guess the number (while loop interaction)

// #include <stdio.h>
// int main()
// {
//     int guess;
//     int tries = 0;

//     printf("I’m thinking of a number in the range 1-10.\n");
//     printf("Try to guess it: ");

//     scanf("%d", &guess);

//     // Write a while loop here:
//     while (guess != 8)
//     {
//         printf("I’m thinking of a number in the range 1-10.\n");
//         printf("Try to guess it: ");
//         scanf("%d", &guess);
//     }

//     if (guess == 8)
//     {
//         printf("You got it!\n");
//     }
// }

// Making a while loop by myself

// #include <stdio.h>
// int main()
// {
//     int i = 0;

//     // Write a while loop here:
//     while (i != 9){
//         int square = i*i;
//         printf("%d\t%d \n", i, square);
//         i++;
//     }
// }   

//oposite (squares from 9-0)
// #include <stdio.h>
// int main()
// {
//     int i = 9;

//     // Write a while loop here:
//     while (i != 0){
//         int square = i*i;
//         printf("%d\t%d \n", i, square);
//         i--;
//     }
// }   


//Do-While Loop


// #include <stdio.h>
// int main() {
//     int i = 9;
    
//     do{
//         printf("%d\n", i);
//         i++;
//     } while (i < 10); 
        
// }

//For Loop

#include <stdio.h>
    int main() {
        int i = 99;
        
        // Write your loop here
        while (i!=0){
            printf("%d bottles of pop on the wall!\nTake one down and pass it around\n%d bottles of pop on the wall", i);
            i--;
    }

}
