//Use of pointer in structures.
#include <stdio.h>
#include <string.h>

typedef struct student {
    int id;
    char name[100];
}student;
 void changeName(student *ptr)
 {
     strcpy(ptr->name,"NA");
 }
int main() 
    {
        student s={101,"abc"};
        changeName(&s);
    printf("%d %s ",s.id,s.name);

    return 0;
}


