#include <stdio.h>

int main() {
    float temparature[2][3][4] = {
        {
            {23.4, 24.0, 22.5, 21.9},
            {24.1, 25.3, 23.8, 22.2},
            {22.8, 23.7, 24.5, 23.0}
        },
        {
            {30.2, 29.8, 28.5, 27.9},
            {31.0, 30.5, 29.0, 28.3},
            {28.8, 29.5, 30.0, 29.2}
        }
    };

    for (int city = 0; city < 2; city++) {
        printf("City %d: \n", city + 1);
        for (int day = 0; day < 3; day++) {
            printf("  Day %d: ", day + 1);
            for (int hour = 0; hour < 4; hour++) {
                printf("%.1f ", temparature[city][day][hour]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
