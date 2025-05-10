#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr = fopen("file_for_reading_and_writing","r");
    char line1[256], line2[256], line3[256];
    if (fgets(line1, sizeof(line1), fptr) != NULL) {
    }

    if (fgets(line2, sizeof(line2), fptr) != NULL) {
    }

    if (fgets(line3, sizeof(line3), fptr) != NULL) {
    }

    fclose(fptr);
    printf("Line 1: %s", line1);
    printf("Line 2: %s", line2);
    printf("Line 3: %s", line3);
	scanf("%c",line1);

    return 0;
}
