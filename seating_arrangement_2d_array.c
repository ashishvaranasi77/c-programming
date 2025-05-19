#include <stdio.h>

int main() {
    char* classroom[3][3] = {
        {"Ashish", "Bharat","Chaitanya"},
        {"Dhanush", "Emanuel", "Frank"},
        {"Grace", "Harshit", "Inok"}
    };

    printf(" Classroom Seating Arrangement:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s\t", classroom[i][j]);
        }
        printf("\n");
    }

    return 0;
}
