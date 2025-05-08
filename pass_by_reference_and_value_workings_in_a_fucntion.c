//program which tells how string work as pass by reference and int work as pass by value.
#include <stdio.h>

int fun(char str[100],int mun)
{
    str[0] = 'A';
    mun=200;
}

int main()
{
    char name[100];
    int num=99;
    printf("Please enter a string: \n");
    scanf("%s",name);
    printf("name: %s\n %d\n", name,num);
    fun(name,num);
    printf("name: %s\n", name);
    printf("changed number %d",num);
    return 0;
}

//Output:
Please enter a string: 
ashih
name: ashih
 99
name: Ashih
changed number 99