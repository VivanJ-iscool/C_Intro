//6.2 Strings

//6.1.2 Creating and Initializing Strings

//1st & 2nd way of initializing strings
// #include <stdio.h>
// int main(){
//     char greet[] = "Hello World";
//     char greet2[]={'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', '\0'};
//     printf("%s\n", greet);
//     printf("%s", greet2);
// }

// #include<stdio.h>
// int main() {
//     // Checkpoint 1 code goes here
//     char comp[] = {'C', 'O', 'M', 'P', 'U', 'T', 'E', 'R', '\0'};
//     // Checkpoint 2 code goes here
//     char compCode[] = "Computer Code";
//     // Checkpoint 3 code goes here
//     printf("%s\n%s\n", comp, compCode);
// }


//6.1.3 Character Access and Modification

// #include<stdio.h>
// int main() {
//     char srt[] = "Yo_Wsp_Guys";
//     printf("%c\n", srt[6]);
// }


// #include <stdio.h>
// int main() {
//     char p[] = "procezzor";
//     // Checkpoint 1 code goes here
//     printf("%c\n", p[3]);
//     // Checkpoint 2 code goes here
//     printf("%s", p);
// }

//6.1.4 Looping Through String strings
#include <stdio.h>
#include <string.h> //strings and their characters don't 
int main(){
    char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
    char p[] = "poolloop";
    
    // Checkpoint 1 code goes here
    for (int i = 0; i< strlen(s); i++){
        s[i] = '*';
       
    }
     printf("%s",s);
    // Checkpoint 2 code goes here
    for (int i = 0; i < (strlen(p) / 2); i++){
        p[i] = '#';
       
    }
    printf("\n %s", p);
    return 0;
}


//6.1.5 Concatenating Strings

//strcat.h() basically allows one string to be added to the end of another (str(src)+ strlen(dst)+ 1)







