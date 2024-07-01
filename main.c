#include <stdio.h>

int countNumbers(int digits) {
    int a = 1, b = 1, c = 0, temp;
    for (int i = 1; i < digits; ++i) {
        temp = a;
        a = b + c;
        c = b;
        b = temp;
    }
    return a + b;
}

int main() {
    int p;
    printf("Enter the number of digits (p): ");
    scanf("%d", &p);
    if (p <= 30) {
        printf("The number of valid numbers with %d digits is: %d\n", p, countNumbers(p));
    } else {
        printf("The value of p should be less than or equal to 30.\n");
    }
    return 0;
}
