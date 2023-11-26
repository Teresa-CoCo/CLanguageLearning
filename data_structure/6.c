#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }

    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
