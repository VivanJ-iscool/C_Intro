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
// #include <stdio.h>
// #include <string.h> //strings and their characters don't 
// int main(){
//     char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
//     char p[] = "poolloop";
    
//     // Checkpoint 1 code goes here
//     for (int i = 0; i< strlen(s); i++){
//         s[i] = '*';
       
//     }
//      printf("%s",s);
//     // Checkpoint 2 code goes here
//     for (int i = 0; i < (strlen(p) / 2); i++){
//         p[i] = '#';
       
//     }
//     printf("\n %s", p);
//     return 0;
// }


//6.1.5 Concatenating Strings

//strcat() basically allows one string to be added to the end of another (str(src)+ strlen(dst)+ 1)

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str1[] = "Oh my ";
//     char str2[] = "67 my 67";
//     strcat(str1, str2);
//     printf("%s", str1);
// }


#include<stdio.h>
#include<string.h>
    int main() {
        char s1[] = "London";
        char s2[] = " Bridge";
        char n[] = "New";
        char y[] = " York";
        char c[] = " City";
// Code for checkpoint 1 goes here
        strcat(s1, s2);
        printf("%s\n", s1);
// Code for checkpoint 2 goes here
        strcat(n,y);
        strcat(n,c);
        printf("%s\n", n); 
}

//6.1.5 Copying Strings

//strcpy()

#include<stdio.h>
#include<string.h>
    int main() {
        char src[] = "banana";
        char dst[7];
        char pan[] = "How vexingly quick daft zebras jump!";
        int len = 0; // Checkpoint 2
    char dst2[len];
    // Code for checkpoint 1 goes here
    printf("%s\n", dst);
    
    // Code for checkpoint 3 goes here
    printf("%s", dst2);

}
