#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        a %= b;
        int temp = a;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = 1;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        result = lcm(result, x);
    }
    printf("%d\n", result);
    return 0;
}
