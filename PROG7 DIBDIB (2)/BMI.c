#include <stdio.h>

int main() {

    int bmi;

    printf("Please enter your BMI:");
    scanf("%d", &bmi);

    if (bmi < 0){
        printf("Invalid BMI");
    }
    else if (bmi < 18.5){
        printf ("Underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        printf ("Normal");
    }
    else if (bmi >= 25.0 && bmi<= 29.9){
        printf ("Overweight");
    }
    else if (bmi >= 30.0) {
        printf("Obese");
    }
    return 0;
}