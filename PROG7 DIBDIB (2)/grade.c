#include <stdio.h>

int main() {
    int grade;
    
    printf("Please enter your grade:");
    scanf ("%d", &grade);

    if (grade > 100 || grade < 0){
        printf ("Invalid Grade. Please enter numbers 1-100");
    }
    else if ( grade <= 100 && grade >= 90) {
        printf ("Grade  A");
    }
    else if ( grade <= 89 && grade >= 80) {
        printf ("Grade  B");
    }
    else if ( grade <= 79 && grade >= 70) {
        printf ("Grade  C");
    }
    else if ( grade <= 69 && grade >= 60) {
        printf ("Grade  D");
    }
    else {
        printf ("Grade F");
    }
    
    return 0;
}