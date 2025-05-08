//how a program work when function is defined after the program(by giving Function prototype)
#include <stdio.h>

int multiplyNum(int n1,int n2);

int main() 
{
    int result = multiplyNum(4,5);
    printf("%d",result);
    return 0;
}
int multiplyNum(int n1,int n2)
{
    int multiply = n1*n2 ;
    return multiply;//after this the working stops
printf("ashish is studying in engineering second year");
}
//output:
20