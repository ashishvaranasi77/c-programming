#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("file_for_reading_and _writing", "w");

    fprintf(fptr, "Hello, World!\n");
    fprintf(fptr, "This is a simple C program writing to a file.\n");
    fprintf(fptr, "Writing to files is easy with C!\n");

    fclose(fptr);

    printf("Data written to the file successfully.\n");

    return 0;
}
