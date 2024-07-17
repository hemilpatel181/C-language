#include<stdio.h>
#include<conio.h>

void main(){
	int a, b;
	clrscr();

	printf("Enter Value Of A : ");
	scanf("%d", &a);

	printf("Enter Value Of B : ");
	scanf("%d", &b);

	printf("%d + %d : %d\n", a, b, a+b);
	printf("%d - %d : %d\n", a, b, a-b);
	printf("%d * %d : %d\n", a, b, a*b);
	printf("%d + %d : %d\n", a, b, a/b);
	getch();
}