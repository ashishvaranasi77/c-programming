#include <stdio.h>

// Non-tail recursive function
int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);  // Recursive call is not the last operation
}
int main() {
    int result = sum(5);
    printf("Sum: %d\n", result);
    return 0;
}
