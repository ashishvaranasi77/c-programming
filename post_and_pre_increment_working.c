//program tells how post and pre increment operator works.
#include <stdio.h>

int x=0;
int y=8;
void fun()
{
    x=++x + ++y + 13;//here when we write like this x=++y; x takes the increased y and y increases i.e. x=9 and y=9 pre increment
	                 //here when we write like this x=y++; x takes the y and y increases i.e. x=8 and y=9 post increment
    x++;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
int main() {
    fun();
    return 0;
}
//output:
x=24
y=9
