#include <stdio.h>
void calBMI(float weight, float height){
    bmi = weight / ( height * height);
    printf ("\nYour BMI is %.2f \n", bmi);
}
void BMIcat(float bmi){
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
    
}
int main() {

     float weight, height, bmi;
    

    printf("Enter your height (m):");
    scanf("%f", &height);
    printf("Enter your weight (kg):");
    scanf("%f", &weight);

    if (weight < 0|| height < 0){
        printf("Invalid height/weight. Height/Weight must be greater than 0.");
    }

    calBMI;
    BMIcat;
    
    return 0;
}