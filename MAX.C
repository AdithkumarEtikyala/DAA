#include <stdio.h>
#include <conio.h>

int main()
{

    int arr[] = {42,15,22,4,6,7,8,9};

    int res = arr[0];
    int i;
    clrscr();
    for (i=1; i < 8; i++) {
	if(res < arr[i])
	    res = arr[i];
    }
    printf("Array Elements: ");
    for (i =1; i < 8; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The maximum value of the array is: %d", res);

    return 0;
}