#include <stdio.h>

int main () {

int num1, num2;
char operation;

printf ("Enter two numbers:");
scanf ("%d %d" ,&num1, &num2);
printf ("Enter operation (+, -, *, /):");
scanf (" %c" ,&operation);

    switch (operation){
        case '+':
        printf (" ADDITION: \n %d + %d = %d", num1, num2, num1+num2);
        break;
        case '-':
        printf ("SUBTRACTION: \n %d - %d = %d", num1, num2, num1-num2);
        break;
        case '*':
        printf ("MULTIPLICATION: \n %d * %d = %d", num1, num2, num1*num2);
        break;
        case '/':
        if (num2 != 0){
        printf ("DIVISION: \n %d/%d = %d", num1, num2, num1/num2);
    }
       else {
            printf ("Can't be divided by zero. Please enter another number than zero.");
    }
        break;
        default:
            printf("Please enter (+, -, *, /) operation.");
    }
        

    return 0;
}
    
