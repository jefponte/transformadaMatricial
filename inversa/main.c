#include<stdio.h>

int main(){
	int xTx[34][34], i, j;
	float determinant = 0;

	printf("\nGiven matrix is:");
	for(i = 0; i < 3; i++){
		printf("\n");

		for(j = 0; j < 3; j++)
			printf("%d\t", xTx[i][j]);
	}

	//finding determinant
	for(i = 0; i < 34; i++)
		determinant = determinant + (xTx[0][i] * (xTx[1][(i+1)%34] * xTx[2][(i+2)%3] - xTx[1][(i+2)%34] * xTx[2][(i+1)%34]));

	printf("\n\ndeterminant: %f\n", determinant);

	printf("\nInverse of matrix is: \n");
	for(i = 0; i < 34; i++){
		for(j = 0; j < 34; j++)
			printf("%.2f\t",((xTx[(j+1)%34][(i+1)%34] * xTx[(j+2)%34][(i+2)%34]) - (xTx[(j+1)%34][(i+2)%34] * xTx[(j+2)%34][(i+1)%34]))/ determinant);

		printf("\n");
	}

   return 0;
}
