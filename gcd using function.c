#include <stdio.h>

int gcd(int a, int b) {
    int gcd1 = 1;
    int i;
    for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd1 = i;
        }
    }
    return gcd1;
}

int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    int result = gcd(x, y);
    printf("The GCD of %d and %d is: %d\n", x, y, result);

    return 0;
}
