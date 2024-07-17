#include<stdio.h>
#include<conio.h>

void main(){
	int r;
	float pi = 3.14, area;
	clrscr();

	printf("Enter the radius of circle : ");
	scanf("%d", &r);

	area = pi * r * r;

	printf("Area Of circle : %.2df", area);

	getch();
}