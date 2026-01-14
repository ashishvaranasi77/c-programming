#include<stdio.h>

int main() 
{
	int key,n,i,k,m;
	int A[] = {5,2,9,6,4,7};
	
	k = sizeof(A);
	printf("size of the array: %d\n",k);
	m = sizeof(A[0]);
	printf("size of the one element: %d\n",m);
	n = sizeof(A) / sizeof(A[0]);
	printf("no of elements: %d\n",n);
for(int j=1 ; j<n ; j++)
{
	key = A[j];
	i = j-1;//from second element
	printf("i value before : %d\n",i);
	
	while(i>=0 && A[i]>key)
	{
		A[i+1]=A[i];				// If the key is smaller than elements on its left,
										// the while loop shifts all larger elements one position to the right
										// until the correct position for the key is found
		printf("a:%d\n",A[i]);
		i=i-1;
		printf("i value after: %d\n",i);
		printf("key %d\n",key);
	}
		A[i+1] = key;// key is inserted which is retrieved in this position,if it is in  the while loop the sorting may appear to be sorted but logic fails and for some cases it is left partially unsorted
		printf("key %d\n",key);
}
 printf("sorted array: ");
for(int k = 0; k < n; k++)
    printf("%d ",A[k]);

return 0;

}
 



