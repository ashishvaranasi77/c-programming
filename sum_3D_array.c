#include <stdio.h>

int main() {
    int a[2][2][2] = {
        {
            {10, 20},
            {30, 40}
        },
        {
            {50, 60},
            {70, 80}
        }
    };

    int sum = 0;
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            for (int z = 0; z < 2; z++) {
                sum += a[x][y][z];
            }
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
