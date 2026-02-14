#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter string: ");
    scanf("%s", str);

    int left = 0;
    int right = strlen(str) - 1;
    int isPalindrome = 1;   // assume true

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;   // not palindrome
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
