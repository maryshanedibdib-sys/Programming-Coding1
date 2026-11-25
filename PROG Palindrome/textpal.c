// for palindrome words
#include <stdio.h>

int main() {

    char word [100];
    int length = 0;
    
    printf("Enter a word:");
    scanf("%99s", &word);

    for (int i = 0; word[i] != '\0'; i++) {
        length++;
    }
    printf("The length of the word is: %d\n", length);

    // Original
    printf("\nOriginal => ");

    for(int i = 0; i < length; i++) {
        printf("%c ", word[i]);
    }

    // Reverse
    printf("\nReverse => ");

    for(int i = length - 1; i >= 0; i--) {
        printf("%c ", word[i]);
    }

    // Palindrome
    int tail = length - 1;
    int isPalindrome = 1;

    for(int head = 0; head < length / 2; head++) {

        if(word[head] != word[tail]) {
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