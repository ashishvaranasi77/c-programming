//Program for finding sum of two numbers using function with return statement.
#include <stdio.h>

int addNum(int n1,int n2)
{
    int sum = n1 +  n2 ;
    return sum;//return is used because integer are pass by value,not pass by reference
printf("ashish is studying in engineering second year");//this statement will not print after return is passed
    
}
int main() {
    int result = addNum(4,5);
    printf("%d",result);
    return 0;
}

//Output 
9
