
#include <stdio.h>

int main() {

    int size = 5;
    int numbers[size];

    // Input 5 numbers
    for(int i = 0; i < size; i++) {
        printf("\nEnter a number %d/%d: ", i + 1, size);
        scanf("%d", &numbers[i]);
    }

    // Original
    printf("\nOriginal => ");

    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    // Reverse
    printf("\nReverse => ");

    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    // Palindrome
    int tail = size - 1;
    int isPalindrome = 1;

    for(int head = 0; head < size / 2; head++) {

        if(numbers[head] != numbers[tail]) {
            isPalindrome = 0;
            break;
        }

        tail--;
    }

    // Display palindrome result
    if(isPalindrome) {
        printf("\nPalindrome: Yes");
    }
    else {
        printf("\nPalindrome: No");
    }

    return 0;
}
