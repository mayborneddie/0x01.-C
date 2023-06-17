//a program that prints the alphabet in lowercase except q and e using putchar 
#include <stdio.h>

int main() {
    char letter;
    
    for (letter = 'a'; letter <= 'z'; ++letter) {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
    }
    
    putchar('\n');
    return 0;
}

