#include <stdio.h>

int main() {
char ch;
printf("Enter an alphabet: ");
scanf(" %c", &ch);
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
printf("%c is a vowel.\n", ch);
 } else {
printf("%c is a consonant.\n", ch);
        }
    } else {
printf("Error: %c is not an alphabet.\n", ch);
    }

return 0;
}
