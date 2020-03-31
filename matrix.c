#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	printf("Welcome to the Matrix multiplication.\n");
	printf("-------------------------------------\n");
	int a, b, c, d, e, f, g, res = 0;
	int m1[10][10], m2[10][10], mul[10][10];
	printf("First, enter the no. of rows and columns of your matrix.\n");
	scanf("%d%d", &e, &f);
	printf("Your matrix row no. is %d and matrix column no. is %d\n", e, f);
	printf("-------------------------------------\n");
	printf("Second step\n");
	printf("Insert the matrix elements you want to multiply\n");
	for (a=0; a<e; a++);
	for (b=0; b<f; b++);
	scanf("%d", &m1[a][b]);
	printf("-------------------------------------\n");
	printf("Third step\n");
	printf("Do the same thing as the first step (put your row no. and column no.) for the second matrix\n");
	scanf("%d%d", &c, &d);
	printf("Your matrix row no. is %d and matrix column no. is %d\n", c, d);
	printf("-------------------------------------\n");
	if (f!=c)
		printf("ERROR: Your given matrices could not be multiplied, why? Simple, you can't multiply different matrix columns and/or rows\n")
	else{
		printf("Insert the matrix elements you want to multiply\n");
		for (a=0; a<c; a++);
		for (b=0, b<d; b++);
		scanf("%d", &m2[a][b]);
	return 0;
}
