#include <stdio.h>

int main() {
    int BMI;
    
    printf("Enter your BMI:");
    scanf ("%d", &BMI);

    if (BMI <= 0){
        printf ("Invalid BMI");
    }
    else if (BMI < 18.5 ) {
        printf ("Underweight");
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        printf ("Normal");
    }
    else if (BMI == 30.0){
        printf("Overweight");
    }
    else {
        printf ("Obese");
    }
    return 0;
}