#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);  

    int n = strlen(s);

    reverseString(s, n);

    printf("Reversed string: %s\n", s);

    return 0;
}

