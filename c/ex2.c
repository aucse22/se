#include <stdio.h>
int binsrc(int x[], int low, int high, int key) {
	int mid;
	while (low <= high) {
		mid = (low + high)/2;
		if (x[mid]==key) {
			return mid;
		}
		if (x[mid]<key) {
			low=mid+1;
		} else {
			high =mid-1;
		}
	}
	return -1;
}
int main() {
	int a[200], key, i, n, succ;
	printf("Enter the n Value: ");
	scanf("%d", &n);
	if (n>0) {
		printf("Enter the elements in ascending order\n");
		for (i=0; i<n; i++) 
			scanf("%d", &a[i]);
		printf("Enter the key element to be searched\n");
		scanf("%d", &key);
		succ=binsrc(a,0,n-1,key);
		if(succ>=0) {
			printf("Element found in position = %d\n", succ+1);
		} else {
			printf("Element not found\n");
		}
	} else {
		printf("number of element should be greater then zero\n");
	}
	return 0;
}