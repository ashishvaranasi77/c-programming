//block of adresses assigning in pointers.
#include <stdio.h>

int main() 
    {
        int arr[]={10,20,30};
        int *p1=arr;
        int (*p2)[3]=&arr;//block of address &arr
        printf("%d\n",*p1);
        printf("%d\n",**p2);
    return 0;
}