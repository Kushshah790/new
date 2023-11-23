#include <stdio.h>  
   
int main() {  
    char c;
    printf("Enter an Alphabet\n");  
    scanf("%c", &c);  
    switch(c) {  
        case 'a':
        case 'e':  
        case 'i':  
        case 'o':   
        case 'u':   printf("%c is VOWEL", c);
            break;  
        default: printf("%c is CONSONANT", c);  
    }
}