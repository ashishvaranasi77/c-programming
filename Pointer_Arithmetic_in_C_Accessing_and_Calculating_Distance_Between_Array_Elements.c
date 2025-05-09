// Pointer Arithmetic in C: Accessing and Calculating Distance Between Array Elements.
#include <stdio.h>

int main() {
    
    int arr[]={10,20,30,40};
    int *ptr1 = arr;
    printf("%d %p\n",*ptr1,ptr1);
    int *ptr2 = ptr1+2;
    printf("%d %p\n",*ptr2,ptr2);
    printf("%zd\n",ptr2-ptr1);//zd size or no of objects between ptr2 and ptr 1 changes here which is 2.
    
    return 0;
}