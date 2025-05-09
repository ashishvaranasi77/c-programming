//why pointers??
#include <stdio.h>//for pass by value does not change in function.

void fun(int *ptr)
{
    printf("%d\n",*ptr);
    *ptr = *ptr + 5;
}

int main() 
{
    int x =  5;
    fun(&x);
    printf("%d",x);

    return 0;
}