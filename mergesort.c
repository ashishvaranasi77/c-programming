#include <stdio.h>


	void merge(int A[], int p, int q, int r)
	{
	
	int n1 = q-p+1;
	int  n2 = r - q;
	
	int L[n1],R[n2];
	
	 for (int i = 0; i < n1; i++) 
	 {
        L[i] = A[p + i];
        printf("%d ", L[i]);
    }
	
	 for (int j = 0; j < n2; j++) 
	 {
        R[j] = A[q + 1 + j];
        printf("%d ", R[i]);
    }
	
	 int i = 0, j = 0, k = p;

	while(i<n1 && j<n2)
	{
	if (L[i] <= R[j]) {
        A[k] = L[i];
        i++;
    } else {
        A[k] = R[j];
        j++;
    }
    k++;
    }

    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

	void mergesort(int A[],int p,int r)//recursive dividing 
	{
		if(p < r)
		{
		
			int q = (p-r)/2;
			mergesort(A,p,q);//left part 
			mergesort(A,q+1,r);//right part 
			merge(A,p,q,r);
		
		}
	}

int main()
{

    int A[] = {5, 2, 9, 6, 4, 7, 12, 34};
    int n = sizeof(A) / sizeof(A[0]);
	
	mergesort(A, 0, n - 1);
	
	
	printf(	"sorted array:");
	for(int i = 0;i < n ;i++)
	printf(	"%d ",A[i]);
	
	return 0;
	
	}
	