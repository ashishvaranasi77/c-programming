//Program for finding length of a string with for loop
#include <stdio.h>

int len(char name[100])
{
    int i=0;
    for(i=0;i>=0;i++)
    {
        if (name[i] == '\0')
        {
            break;
        }
    }
   	 return i;
}

    
int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    int stringLength = len(name);
    printf("Length of string: %d\n", stringLength);
    for (int i = 0; i < stringLength/2; i++) 
    {
        char x = name[i];
        name[i] = name[stringLength-i-1];
        name[stringLength-i-1] = x;
        printf("name:%s counter: %d \n", name, i);
    }
       	//printf("result:%s",name);
   	 return 0;
}   

///OUTPUT
Enter your name: ABCDE
Length of string: 5
name:EBCDA counter: 0 
name:EDCBA counter: 1 
