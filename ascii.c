#include <stdio.h>

int main() {
    char ch;
    printf("Enter a single character: ");
    scanf("%c", &ch);
    printf("The ASCII value of '%c' is %d\n", ch, (int)ch);
    return 0;
}
