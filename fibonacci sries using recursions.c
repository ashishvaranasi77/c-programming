#include <stdio.h>//fibonacci sries using recursions

int fib(int n) {
    if (n <= 1)
        return n;
    else
    
    return fib(n-1)+fib(n-2);
}

int main() {
    int num = 5;
    printf("Fibonacci series up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fib(i));//iterators used for series
    }
    printf("\n");
    return 0;
}