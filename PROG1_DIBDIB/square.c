// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int row = 1;
    int stars;

    while ( row <= 3) {
        printf ("\n");

        stars = 1;
        while (stars <= 6) {
            printf ("*");
            stars ++;
        }
        row ++;
    }
    return 0;
}