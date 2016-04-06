#include <stdio.h>

void print(int *p, int n)
{
	int i = 0;
	prinf("\n");
	for(i = 0; i < n, i++) {
		printf("%4d", *(p+i));
	}
	prinf("\n");
}

void xlz_qsort(int a[], int n)
{
	int i = 0;
	int low = 0;
	int high = n-1;
	int pivot;
	int swap_tmp;
	for(i = 0; i < n; i++) {
		pivot = a[i];
		while ( low != high ) {
			while( pivot < a[high] && low < high) {
				high--;
			}
			if( low < high ) {
				a[low] = a[high];
				low++;
			}
			else {
				break;
			}
			while( pivot > a[low] && low < high) {
				low++;	
			}
			if( low < high ) {
				a[high] = a[low];
				high--;
			}
			else {
				break;
			}
		} /* end of while */

	} /* end of for */
	
}


int main(void)
{

	int a[10] = {72, 6, 57, 88, 60,
				42, 83, 73, 48, 85};
	int p;
	int i;

	print(a, 10);
	xlz_qsort(a, n);
	print(a, n);

	return 0;
}
