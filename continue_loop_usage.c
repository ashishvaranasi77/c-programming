// Function which tells how continue is used in loop
#include <stdio.h>//this function gives the no of digits not divisible by x upto n

int main() {
    int n,x;
    printf("enter n and x:\n");
    scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        if (i%x==0)
        continue;
        printf("%d\n",i);
    }

    return 0;
}

