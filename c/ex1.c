#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	int a[10][10], b[10][10], m[10][10], i, j, p, q, r, s, k;
	char x[10], y[10];
	int t=0, fl=0, l, ain=0, bin=0;
	printf ("Enter the size of A Matrix \n");
	scanf ("%d%d", &p, &q);
	printf ("Enter the size of B Matrix \n");
	scanf ("%d%d", &r, &s);
	if (q==r) {
		printf ("Test Case 1: Matrixd Multiplication can be done \n");
		printf ("Case 1: Success \n");
		printf ("Enter the elements of matrix A: \n");
		for (i=0; i<p; i++) {
			for (j=0; j<q; j++) {
				fl=0;
				ain=0;
				scanf("%s", x);
				l=strlen(x);
				while (x[ain++]!='\0') {
					if (x[ain]=='.') {
						fl=1;
						break;
					}
				}
				if (fl==0) {
					a[i][j]=atoi(x);
				} else {
					t=1;
				}
			}
		}
		printf ("Enter the  elements of Matrix B: \n");
		for (i=0; i<r; i++) {
			for (j=0; j<s; j++) {
				fl=0;
				bin=0;
				scanf("%s", y);
				l=strlen(y);
				while (y[bin++]!='\0') {
					if (y[bin]=='.') {
						fl = 1;
						break;
					}
				}
				if (fl==0) {
					b[i][j]=atoi(y);
				} else {
					t=1;
				}
			}
		}
		if (t==0) {
			for (i=0; i<p; i++) {
				for (j=0; j<s; j++) {
					m[i][j]=0;
					for (k=0; k<q; k++) {
						m[i][j]=m[i][j]+a[i][j]*b[k][j];
					}
				}
			}
			printf ("The result of matrix multiplication is: \n");
			for (i=0; i<p; i++) {
				for (j=0; j<s; j++) {
					printf("%d\t", m[i][j]);
				}
				printf("\n");
			}
		} else {
			printf ("Test Case 3: Matrix Multiplication is not possible. \nOne or more values is not an integer \nCase 3: Failure\n");
			getch();
		}
	} else {
		printf ("Test Case 2: Matrix Multiplication is not possible \nThe columns of A Matrix is not equal to rows of B Matrix\nCase 2: Failure\n");
	}
	getch();
}
