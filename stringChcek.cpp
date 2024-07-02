#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool isBalanced(char str[], int index, int balance);

int main() {
    char str[1000];
    printf("Enter the bracket sequence: ");
    scanf("%s", str);

    // Call the recursive function to check if the bracket sequence is balanced
    if (isBalanced(str, 0, 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

// Recursive function to check if the bracket sequence is balanced
bool isBalanced(char str[], int index, int balance) {
    // Base case: If balance becomes negative, it means there are more ')' than '('
    if (balance < 0) {
        return false;
    }

    // Base case: If we reach the end of the string
    if (str[index] == '\0') {
        // Check if balance is zero, which means equal number of '(' and ')'
        return balance == 0;
    }

    // Recursive cases:
    if (str[index] == '(') {
        // If current character is '(', increase balance
        return isBalanced(str, index + 1, balance + 1);
    } else if (str[index] == ')') {
        // If current character is ')', decrease balance
        return isBalanced(str, index + 1, balance - 1);
    } else {
        // If character is neither '(' nor ')', continue checking
        return isBalanced(str, index + 1, balance);
    }
}
