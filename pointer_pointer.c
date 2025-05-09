//pointer to pointer.
#include <stdio.h>

void swap(const char **ptr1,const char **ptr2)
{
    const char *temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    
    
    
}
int main()
{
    const char *s1="ashish";
    const char *s2="super";
    swap(&s1,&s2);
    printf("%s %s",s1,s2);
    return 0;
    
}
    