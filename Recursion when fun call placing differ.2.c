// Recursion when fun call placing differ.2
#include <stdio.h>

void fun(int n)
{
    if (n==0)
    return ;
    else
    {
        fun(n-1);
        printf("%d\n",n);
        
    }
    
}
int main() {
    fun(3);
    return 0;
}