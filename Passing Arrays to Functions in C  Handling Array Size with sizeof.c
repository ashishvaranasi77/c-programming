//Passing Arrays to Functions in C: Handling Array Size with sizeof.
#include <stdio.h>

void fun(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);//Here we cannot pass array in function i.e. the function will not be able to tell size as array passin is regarded as a pointer
    fun(arr,n);
    return 0;
    
}