//memory free() syntax example.
#include <stdio.h>
#include <stdlib.h>

int *getArray(int n) {
    int *ptr = calloc(n,sizeof(int)*n);
    return ptr;
}

int main() {
    int n = 5;
    int *ptr = getArray(n);

    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

free(ptr);//after deallocating no dereferencing works after that we can give ptr=NULL;
    return 0;
}