#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr = fopen("CSV.csv", "r"); 
    char line[256];                       
    while (fgets(line, sizeof(line), fptr)) {
        line[strcspn(line, "\n")] = '\0'; 


        char *token = strtok(line, ",");  
        while (token != NULL) {
            printf("%s\n", token);     
            token = strtok(NULL, ",");     
        }
    }

    fclose(fptr);  // Close the file
    return 0;
}
