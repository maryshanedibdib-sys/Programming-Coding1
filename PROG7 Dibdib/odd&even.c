#include<stdio.h>

int main (){

    //Odd & Even Checker
    int num;
    
    printf("Please enter a number:");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf ("%d is even.", num);
    }
    else {
        printf("%d is odd.", num);
    }
    return 0;
}
