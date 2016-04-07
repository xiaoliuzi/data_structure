#include <stdio.h>

void prt(int *p, int n)
{
	int i = 0;
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("%4d", *(p+i));
	}
	printf("\n");
}

void xlz_qsort(int a[], int low, int high)
{

	int pivot;
	if (low < high) {
		pivot = partition(a, low, high);
		xlz_qsort(a, low, pivot-1);
		xlz_qsort(a, pivot+1, high);

	}
}


int partition(int a[], int low, int high)
{
	int pivot;
	pivot = a[low];
	while ( low < high ) {
		while( pivot <= a[high] && low < high) {
			high--;
		}
		if( low < high ) {
			a[low] = a[high];
		}
		while( pivot >= a[low] && low < high) {
			low++;	
		}
		if( low < high ) {
			a[high] = a[low];
		}
	} /* end of while */

	a[low] = pivot;
	return low;
//	} /* end of for */
	
}


int main(void)
{

	int a[10] = {72, 6, 57, 88, 60,
				42, 83, 73, 48, 85};
//	int a[10] = {49, 38, 65, 97, 76,
//				13, 27, 49, 48, 85};
	int p;
	int i;
	int n = 10;

	prt(a, 10);
	xlz_qsort(a, 0, 9);
	prt(a, n);

	return 0;
}
