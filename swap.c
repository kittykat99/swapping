#include <stdio.h>

void main() 
{
	int x = 10;
	int y = 5;

	printf("\n Values before swapping");
	printf("\n X: %d\n Y: %d\n", x, y);

	// add swap logic here
	int temp = x;
	x = y;
	y = temp;
	
	printf("\n Values after swapping");
	printf("\n X: %d\n Y: %d\n", x, y);
}
