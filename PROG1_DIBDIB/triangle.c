// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int row = 1;
    int stars;
    int space;
    
    while ( row <= 5) {
        printf ("\n");

        space = 1;
        while (space <= 5 - row) {
            printf (" ");
            space ++;
        }
        stars = 1;
        while (stars <= 2*row - 1) {
            printf ("*");
            stars ++;
        }
        
        row ++;
    } 
        
    return 0;
}