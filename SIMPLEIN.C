// simple interest : P * R * N  / 100
#include<stdio.h>
#include<conio.h>

void main(){
	int p, r, n, total;
	clrscr();

	printf("Enter Principal : ");
	scanf("%d", &p);

	printf("Enter Rate Of interest : ");
	scanf("%d", &r);

	printf("Enter number of years : ");
	scanf("%d", &n);

	printf("Interest Amount : %d", p * r * n / 100 + p);

	getch();
}

