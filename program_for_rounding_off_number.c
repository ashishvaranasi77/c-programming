//program for finding rounded off number.
#include <stdio.h>
#include <math.h>

int main() {
    double num = 6.8;
    int rounded = round(num);  // Explicit cast to int
    printf("Rounded int: %d\n", rounded);
    return 0;
}
//output
Rounded int: 7
