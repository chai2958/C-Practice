#include <stdio.h>

int len(int a);
int sumEven(int b);
int sumOdd(int c);
int prime(int e);

int main() {
    int d;
    scanf("%d", &d);

    int se = sumEven(d);
    int so = sumOdd(d);
    int diff = se - so;

    if (len(d) >= 4 && se > so && prime(diff)) {
        printf("Valid Account Number");
    } else {
        printf("Invalid Account Number");
    }
    return 0;
}

/* count the digits */
int len(int a) {
    int count = 0;
    while (a > 0) {
        count++;
        a /= 10;
    }
    return count;
}

/* sum of even digits */
int sumEven(int b) {
    int s = 0;
    while (b > 0) {
        int digit = b % 10;
        if (digit % 2 == 0)
            s += digit;
        b /= 10;
    }
    return s;
}

/* sum of odd digits */
int sumOdd(int c) {
    int s = 0;
    while (c > 0) {
        int digit = c % 10;
        if (digit % 2 != 0)
            s += digit;
        c /= 10;
    }
    return s;
}

/* returns 1 if e is prime, else 0 */
int prime(int e) {
    if (e < 2)
        return 0;
    for (int i = 2; i * i <= e; i++) {
        if (e % i == 0)
            return 0;
    }
    return 1;
}