#include <stdio.h>
struct Complex {
    float real,imag;
};
int main() {
    struct Complex num1, num2, sum, diff;
    printf("Enter first and second real and imaginary numbers");
    scanf("%f%f", &num1.real, &num1.imag);
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    diff.real = num1.real - num2.real;
    diff.imag = num1.imag - num2.imag;
    printf("Sum = %.2f + %.2f\n", sum.real, sum.imag);
    printf("Difference = %.2f + %.2f\n", diff.real, diff.imag);
}
