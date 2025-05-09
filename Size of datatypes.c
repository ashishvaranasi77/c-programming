//Size of datatypes:

#include <stdio.h>

int main() {
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));
    printf("Size of void*: %zu byte(s)\n", sizeof(void*));  // pointer size

    return 0;
}


Output: 
Size of char: 1 byte(s)
Size of short: 2 byte(s)
Size of int: 4 byte(s)
Size of long: 8 byte(s)
Size of long long: 8 byte(s)
Size of float: 4 byte(s)
Size of double: 8 byte(s)
Size of long double: 16 byte(s)
Size of void*: 8 byte(s)


=== Code Execution Succe



