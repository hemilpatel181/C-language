#include<stdio.h>
#include<conio.h>

void main(){
	int l, area;
	clrscr();

	printf("Enter the length of Square : ");
	scanf("%d", &l);

	area = l*l;

	printf("Area Of Square : %d", area);

	getch();
}