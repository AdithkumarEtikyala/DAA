#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,t;
	a=4;
	b=5;
	clrscr();
	printf("before swapping: a=%d b=%d\n ",a,b);
	t=a;
	a=b;
	b=t;
	printf("After swapping:a=%d b=%d",a, b);
	getch();
	return 0;
}