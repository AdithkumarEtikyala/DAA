#include <stdio.h>
#include <conio.h>

int main(){
	int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int i;
	clrscr();
	for(i=0;i<10;i++)
		printf("%d",array[i]);
	getch();
	return 0;
}