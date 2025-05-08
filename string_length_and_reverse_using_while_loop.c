//Program for finding length and reverse of a string with while loop

#include <stdio.h>

int len(char name[100])
{
    int i=0;
    while (i>=0)
    {
        if (name[i] == '\0')
        {
            break;
        }
        i++;
    }
    return i;
}

    
int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    int result=len(name); 
    printf("Length of string: %d\n", result);
    return 0;
}
