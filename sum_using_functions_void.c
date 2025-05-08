//Program for adding numbers using functions without return statement(void).
#include <stdio.h>

void addNum(int n1,int n2)
{
    int sum = n1 +  n2 ;
    printf("the sum of %d and %d is %d",n1,n2,sum);
    
}
int main() {
    addNum(4,5);
    return 0;
}
//output
the sum of 4 and 5 is 9