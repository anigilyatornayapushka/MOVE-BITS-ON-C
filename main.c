#include <stdio.h>


void printBin(int n) {
    if (n < 0) {
        printf("%s", "-");
        n *= -1;
    }

    if (n == 1) {
        printf("%d", 1);
    } else if (n == 0) {
        printf("%d", 0);
    } else {
        printBin(n/2);
        printf("%d", n%2);
    }
}

void printOddOrEven(int n) {
    if (n & 1) {
        printf("%s\n", "Odd");
    } else {
        printf("%s\n", "Even");
    }
}


int main(void) {
    // Create order of bits
    unsigned int n = 0b100010001000100010001;

    // Change all 1 in the middle on 0
    n = n ^ 1 << 4 ^ 1 << 8 ^ 1 << 12 ^ 1 << 16;

    printBin(n);
    printf("\n");

    // Define if number odd or even
    printOddOrEven(n);
    printOddOrEven(2);
    printOddOrEven(0b10);

    return 0;
}
