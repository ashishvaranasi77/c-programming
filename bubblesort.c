#include <stdio.h>

int main()
{
    int A[] = {5, 2, 9, 6, 4, 7};
    int n = sizeof(A) / sizeof(A[0]);
    int temp;
	
	for(int i = 0;i < n ;i++)//on each loop iteration a element is sorted and the largest element is kept at last 
		for(int j = 0;j < n - 1 - i ;j++)//so n-1-i is taken as one element is already sorted
		
		if(A[j] > A[j+1]) {
			temp = A[j];
			A[j] = A[j+1];
			A[j+1] = temp;
		}	
	for(int i = 0;i < n ;i++)
	printf(	"sorted array:");
	printf(	"%d ",A[i]);
	
	return 0;
	
}
		