#include <stdio.h>
#include <conio.h>
void main () {
	int a,b,c,result;
	printf("Enter the values of a, b, and c : = ");
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)) {
		if((a==b)&&(b==c)) {
			printf("\nIt is an Equilateral Triangle");
		} else if ((a==b)||(b==c)||(c==a)) {
			printf("\nIt is an Isosceles Triangle");
		} else {
			printf("\nIt is a Scalene Triangle");
		}
	} else {
		printf("\nNot a Triangle");
	}
	getch();
}