#include <stdio.h>//using recursion to find numbers between start and end

void fun(int start,int end)
{
    if (start>end)
    return ;
    else
    {
        printf("%d\n",start);
        fun(start+1,end);
    }
    
}
int main() {
    fun(3,5);
    return 0;
}