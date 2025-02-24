#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, temp = num;
    
    while (temp != 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    
    return (num == reversed);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome number.\n", num);
    else
        printf("%d is NOT a Palindrome number.\n", num);

    return 0;
}

