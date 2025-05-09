// Recursion when fun call differ.1
#include <stdio.h>

void fun(int n)
{
    if (n==0)
    return ;
    else
    {
        printf("%d\n",n);
        fun(n-1);
    }
    
}
int main() {
    fun(3);
    return 0;
}