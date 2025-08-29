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

#include <stdio.h>
int main() {
    
    int a = 10;
    int b = -5;
    
    if (a > 0 || b > 0) {
        printf("Positive\n");
    }

    if (a > 0 && !(b > 0)){
        printf("Positive too!\n")
    }
}
