#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i, j;
    double temp;
	int linhasX = 34;
	int colunasX = 358;
	int linhasY = 6;
	int colunasY = 358;
	double x[34][358] = {{2,3,2,2,2,2,2,2,2,2,3,2,3,2,2,1,2,3,2,1,2,3,2,2,2,2,1,1,3,1,3,3,2,2,2,3,1,1,3,2,0,2,2,2,1,2,3,1,2,3,0,2,1,2,1,3,2,2,1,3,2,3,2,1,3,3,2,2,1,1,2,3,2,2,0,2,3,3,2,3,1,2,3,2,0,1,3,2,1,3,2,2,2,1,2,2,2,1,3,2,1,2,1,1,2,3,2,2,1,2,1,2,2,2,2,1,3,2,1,2,3,2,2,2,1,2,1,2,3,2,3,1,2,3,2,3,2,2,3,2,1,2,3,1,2,2,1,2,3,2,1,2,2,3,2,3,2,2,3,2,3,3,2,2,2,2,1,2,3,3,3,2,3,2,1,2,2,3,1,2,2,2,3,2,3,2,2,2,3,2,3,2,3,3,2,3,1,1,2,1,2,3,2,3,2,2,3,2,2,2,3,2,2,3,3,2,3,2,1,2,2,2,1,1,2,2,3,2,3,2,3,2,3,2,2,2,3,2,3,2,2,3,2,2,3,2,2,2,2,2,3,2,2,3,1,2,1,2,2,3,2,3,2,2,3,2,1,2,3,2,3,2,1,2,3,2,2,3,2,2,2,3,2,2,2,2,2,2,2,1,2,2,2,3,2,2,3,2,2,2,2,2,3,2,2,3,2,2,2,2,2,3,2,2,2,2,2,3,2,1,2,2,2,1,2,1,2,3,2,2,3,2,2,1,2,2,2,2,2,2,3,2,1,2,3,1,2,2,2,2,2,2,2,2,3,3,2,3}, {2,3,1,2,3,3,1,2,2,2,3,2,3,3,2,1,2,3,1,1,1,2,2,2,0,1,1,2,2,1,2,2,3,1,1,3,1,1,2,1,1,1,1,1,2,0,1,1,2,1,1,2,1,1,1,3,2,1,1,3,2,2,2,1,3,3,2,1,1,1,1,2,2,1,0,2,2,2,1,2,1,2,3,1,1,1,2,1,1,3,1,1,2,1,2,2,2,1,3,3,2,2,1,1,2,2,2,2,1,2,1,2,2,2,2,1,3,2,1,3,2,2,2,2,1,1,1,2,2,2,2,1,2,3,3,3,2,3,2,1,1,2,2,1,2,3,2,3,3,2,0,1,3,3,2,2,1,1,2,2,2,2,3,2,2,2,1,3,2,3,2,2,2,2,2,2,3,2,3,2,2,2,2,3,2,2,1,3,2,2,2,2,2,2,2,2,1,1,2,1,2,2,3,2,3,3,2,3,2,2,2,3,2,2,2,2,1,2,1,1,1,1,2,1,1,2,2,3,2,2,2,2,2,2,2,2,2,2,2,2,1,3,2,2,2,1,2,2,2,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,3,2,2,2,2,2,2,2,2,2,3,3,2,2,3,1,2,2,2,2,3,2,1,1,1,1,1,2,2,2,2,1,1,2,1,1,1,3,2,2,2,1,2,1,2,2,2,2,2,2,1,3,2,1,1,1,1,2,1,1,2,0,0,2,3,1,1,1,2,1,0,2,2,2,2,2,2,2,2,2,2,1,0,3,2,2,3,2,2,1,2,2,1,2}, {0,3,2,2,2,2,0,3,1,1,2,0,1,3,3,0,1,3,3,0,1,2,0,2,0,1,0,2,2,2,1,0,3,1,2,2,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,2,1,1,1,0,1,1,0,2,0,2,2,0,3,3,2,2,1,1,2,1,2,2,0,1,2,2,1,2,2,2,2,2,2,1,1,0,1,3,1,0,1,1,2,1,1,2,3,1,2,2,0,1,3,1,2,2,2,3,1,2,1,3,0,1,2,2,2,3,2,1,2,2,0,0,2,2,2,1,2,1,0,2,2,3,1,1,2,1,2,3,0,0,2,0,0,2,2,2,1,1,0,2,1,2,2,1,2,0,0,2,2,3,2,3,2,2,3,3,2,2,3,0,2,2,2,2,1,2,1,0,0,0,0,2,2,3,2,2,2,1,3,2,2,1,0,0,0,0,0,2,2,2,2,2,2,2,2,2,3,2,3,2,1,1,1,2,1,2,3,2,1,1,2,0,0,0,0,2,3,2,3,1,2,2,0,2,2,2,2,3,2,2,2,1,2,2,2,2,2,2,1,1,2,2,2,2,1,0,1,2,1,2,2,3,2,3,2,2,2,1,2,1,2,3,2,2,2,2,3,2,3,2,2,3,3,0,1,2,0,1,3,2,2,2,2,2,1,2,1,2,2,2,3,2,2,2,3,2,3,2,3,2,1,3,3,1,2,2,0,2,2,1,2,0,1,2,2,0,0,2,3,0,1,2,1,2,2,0,2,1,2,2,2,1,1,2,2,2,2,0,1,1,1,2,3,2}, {3,2,3,0,2,0,2,3,0,0,1,3,2,0,3,1,3,0,3,3,2,0,2,3,3,0,1,3,2,3,2,2,3,1,3,0,0,0,1,0,3,1,3,1,1,0,2,0,0,1,2,0,2,3,0,3,1,0,1,1,3,2,0,1,2,0,1,0,1,1,2,2,1,2,0,2,2,2,2,1,3,3,2,1,1,0,3,2,3,3,3,2,2,0,2,0,1,0,2,2,1,2,1,1,2,2,3,3,0,2,2,3,2,2,2,1,2,1,0,3,2,1,0,2,0,2,2,3,1,0,0,1,2,1,3,3,2,2,3,3,3,3,3,3,0,2,3,1,2,0,2,1,2,2,2,1,0,2,2,0,2,3,2,3,0,3,3,0,0,0,2,0,0,3,2,2,0,0,0,0,0,2,3,2,2,0,3,3,2,0,0,2,3,0,0,0,2,1,2,1,2,0,0,0,0,0,0,0,3,2,2,3,2,3,0,0,0,1,3,2,3,2,1,2,0,2,1,3,2,1,0,1,2,1,2,1,0,3,3,2,0,0,0,0,0,2,2,2,2,2,3,2,0,1,0,0,0,1,1,1,1,0,0,0,0,1,1,1,2,1,1,0,0,0,0,1,1,0,1,1,1,1,2,0,0,1,0,2,3,2,3,3,3,2,3,0,1,0,0,1,0,0,0,1,3,3,3,3,2,0,1,0,0,0,0,0,0,0,3,3,1,2,0,0,0,3,3,0,1,0,1,2,0,2,2,0,0,1,1,1,0,0,2,3,3,2,2,3,2,0,1,0,1,0,0,2,1,0}, {0,1,1,0,2,0,0,3,2,1,1,0,0,0,0,3,0,0,3,0,0,0,0,2,0,1,0,0,0,2,0,0,3,0,2,0,0,0,0,0,0,1,3,0,0,0,2,2,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,3,0,1,0,0,1,0,1,0,0,2,0,0,2,0,0,0,0,3,1,1,1,2,0,0,0,3,2,2,0,0,2,0,0,0,2,0,0,2,1,1,1,2,2,2,0,3,2,0,0,2,2,1,0,0,0,3,2,0,0,3,0,2,2,2,3,0,0,1,1,0,3,2,2,1,2,2,2,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,1,1,1,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,1,1,2,3,2,3,2,1,1,2,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,1,1,0,0,0,1,0,1,1,1,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,1,0,1,1,0,1,1,1,1,1,0,0,2,2,2,3,2,1,0,0,0,1,1,0,1,1,2,2,0,2,0,1,1,0,0,0,0,0,0,2,0,0,0,0,0,1,0,0,0,0,0,2,2,0,0,2,2,1,0,0,0,1,1,3,2,0}, {0,0,3,0,2,0,0,3,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,2,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,0,0,2,0,0,0,2,2,0,0,0,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,2,0,3,2,0,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,2,3,2,0,0,0,0,0,0,0,0,0,2,0,3,0,0,0,0,2,0,0,0,0,2,0,3,2,0,0,0,2,0,0,0,3,2,0,0,0,0,0,0,0,0,0,0,2,3,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,3,2,3,2,3,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,2,3,0,0,0,2,0,0,0,2,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,3,0,2,0,0,2,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,3,0,0,0,0,2,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,2,0,3,2,0,0,3,0,0,0,0,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,2,0,0,0,0,2,3,2,0,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,0,2,0,2,2,0,0,0,2,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,2,0,0,0,0,0,0,0,0,0,1,2,1,0,0,0,0,0,0,0,0,0,1,2,2,2,1,0,0,0,0,0,0,0,0,0,3,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0}, {1,1,0,3,0,0,0,0,0,0,2,0,0,1,0,0,0,3,2,0,1,0,0,0,0,2,1,0,0,0,1,0,3,0,0,2,0,0,2,1,0,0,0,3,0,0,0,0,2,0,0,0,0,0,0,0,1,1,0,2,0,0,2,0,0,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,3,0,0,0,0,2,2,1,0,2,0,0,2,0,1,0,2,3,0,0,0,0,0,0,0,0,2,0,0,3,2,0,0,2,0,0,0,1,1,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,0,0,0,0,0,0,0,0,0,1,0,1,2,0,0,0,0,2,3,2,0,3,2,0,0,0,2,0,0,0,2,0,0,0,0,3,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,2,2,3,2,3,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,2,2,2,2,2,3,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,2,3,2,1,2,0,1,0,0,0,2,2,0,0,0,0,0,0,0,1,3,2,0,0,0,1,0,0,0,0,0,0,2,2,0,0,0,0,0,2,0,0,0,0,0,2,2,2,3,0,0,1,3,0,0,0,0,0,2,0,0,0,0,2,2,0,0,0,2,0,0,1,2,0,0,2,1,2,2,2,2,0,0,3,3,0,2,0,0,0,0,0,0,3}, {0,1,0,2,0,0,0,0,0,0,2,0,1,1,0,0,0,3,0,0,2,0,0,0,0,0,0,0,0,0,2,0,3,0,0,2,0,0,1,0,0,0,0,2,1,0,0,0,2,1,0,1,0,0,0,0,1,1,0,2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,3,0,0,0,0,3,0,0,0,0,1,0,0,0,2,0,0,2,0,1,0,2,3,0,0,0,0,0,0,0,0,2,0,0,0,1,3,0,0,0,0,0,2,1,0,0,0,3,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,1,0,1,2,0,0,0,0,2,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,2,3,2,3,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,0,2,1,2,2,1,2,2,2,0,2,2,3,3,2,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,0,0,0,0,0,2,1,0,0,0,0,0,0,0,1,2,2,2,0,0,0,0,0,0,0,0,0,3,1,0,0,0,1,1,2,0,0,0,0,0,2,1,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,2,2,0,0,0,2,0,0,0,0,0,0,0,0,0,2,3,3,0,0,2,0,1,2,0,0,0,0,0,0,3}, {0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,0,1,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, {0,0,1,0,1,0,0,2,0,0,0,0,0,0,2,0,0,0,3,0,0,0,0,3,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,3,2,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,3,0,2,2,0,0,2,0,0,0,0,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,0,2,0,3,1,0,0,0,2,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,3,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,0,0,0,0,0,0,0,0,0,2,3,2,0,0,0,0,0,0,0,0,0,2,2,2,3,2,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0}, {0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,2,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,2,0,0}, {0,1,0,3,0,1,0,0,0,0,0,2,2,1,0,0,2,2,0,0,1,2,0,0,0,0,1,0,2,0,1,2,0,1,0,1,1,1,0,1,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,1,0,1,0,0,2,0,1,0,0,0,1,0,0,0,0,2,2,2,0,0,1,3,2,1,0,2,2,0,1,1,2,1,0,1,0,0,1,0,0,0,1,0,1,0,0,1,0,2,0,1,1,0,0,0,0,0,1,0,0,2,0,0,0,0,2,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,1,2,2,0,0,0,1,0,0,0,0,1,1,2,0,0,0,0,0,0,0,0,0,0,1,2,2,0,0,0,0,2,3,2,0,2,2,2,0,0,3,2,2,3,0,1,2,2,2,2,0,0,0,2,3,1,0,1,2,1,0,0,0,0,0,2,2,3,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,1,0,0,0,0,0,1,2,1,2,1,2,2,2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,1,0,1,1,0,0,0,1}, {0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,1,0,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,3,0,0,0,0,1,0,0,0,0,0,2,0,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,0,3,0,2,0,0,0,3,0,0,0,0,0,0,2,0,0,0,0,2,1,0,0,0,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,1,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,2,1,0,0,3,2,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0}, {3,1,1,0,1,2,1,2,2,3,0,2,3,0,1,1,2,0,3,0,0,2,1,0,2,0,0,1,3,2,0,2,0,3,2,0,2,1,0,1,0,3,2,1,2,2,2,1,0,0,1,1,3,2,1,3,1,0,1,0,3,1,0,1,2,1,1,2,3,1,2,2,1,2,3,1,0,2,3,2,1,1,1,2,0,1,3,2,1,0,2,3,3,0,2,1,2,0,0,3,2,0,2,0,2,0,0,3,0,2,2,1,2,2,3,0,0,1,2,2,0,2,2,3,0,2,0,0,3,0,0,0,2,2,3,0,1,0,2,3,2,3,3,0,2,3,2,2,2,1,0,2,3,2,2,1,2,2,2,2,2,0,0,3,2,2,1,0,0,0,2,0,0,3,3,3,0,0,0,0,2,3,2,3,2,0,1,2,3,0,0,2,2,1,2,2,1,2,1,2,1,0,0,0,0,0,0,0,2,3,2,3,2,2,2,3,2,3,1,0,0,0,0,0,0,2,3,2,2,1,2,2,2,2,2,1,2,0,0,0,0,0,0,0,0,3,2,3,2,3,2,2,2,3,2,2,3,2,1,1,1,3,2,3,0,1,0,0,0,2,3,2,2,2,0,0,2,2,3,2,3,2,2,0,0,0,0,1,0,0,0,0,2,3,2,2,0,0,3,2,3,0,0,0,3,2,2,3,3,0,0,0,0,2,3,0,0,2,2,2,2,0,0,1,2,2,2,0,0,2,2,3,0,1,2,2,3,2,0,2,1,3,0,0,0,2,1,0,0,0,0,3,2,1,2,3,3,0}, {2,2,2,2,2,2,3,3,1,2,3,2,1,2,1,1,1,2,2,3,1,2,3,2,2,2,1,2,3,2,2,1,3,2,2,2,1,1,2,1,2,2,2,1,1,2,1,1,2,1,2,2,1,2,1,1,2,2,3,3,1,1,2,1,2,1,2,2,1,1,0,1,2,2,1,1,2,2,2,1,1,1,2,2,3,1,2,0,3,2,2,1,2,2,0,1,2,2,1,2,3,2,0,1,3,2,2,2,2,3,2,2,2,2,0,2,2,3,1,2,3,3,2,2,3,1,2,1,2,3,2,2,0,3,2,2,2,1,2,0,2,3,2,3,2,2,2,1,1,3,3,2,3,2,1,2,2,1,2,2,2,2,2,2,1,3,3,2,1,2,3,2,3,3,2,3,3,2,2,3,2,2,2,3,2,2,3,1,2,2,3,2,2,1,0,0,2,1,2,1,2,3,2,3,2,3,3,2,2,2,3,2,3,3,2,2,2,2,3,3,2,1,2,2,2,2,2,3,2,2,1,1,1,2,2,2,1,2,2,3,2,3,2,2,2,2,3,2,2,2,3,3,2,2,2,2,2,2,1,2,1,2,2,1,2,2,2,2,2,2,2,1,1,2,2,3,2,2,2,2,3,2,3,2,3,3,3,2,2,3,2,2,2,2,2,2,2,3,1,2,2,2,3,2,2,2,2,1,3,2,2,3,3,1,2,2,1,2,2,1,1,2,2,2,2,3,3,3,2,3,2,2,2,2,1,2,2,1,2,2,3,2,2,2,3,2,2,3,2,2,2,2,2,1,2,3,2,2}, {0,0,0,0,0,0,0,0,0,0,2,0,0,1,1,0,0,0,0,2,2,1,1,1,0,2,1,1,3,1,0,1,2,1,2,2,1,0,1,0,2,1,1,1,0,2,0,1,1,0,1,0,0,0,0,0,1,2,0,2,0,1,0,0,2,2,0,1,0,1,0,0,0,2,1,1,1,0,0,0,1,1,1,0,1,0,0,0,1,1,0,1,0,0,2,1,1,0,0,0,0,1,0,2,0,3,0,0,0,0,0,2,0,0,0,1,0,2,1,1,1,0,2,0,0,1,1,1,0,0,0,2,0,0,0,1,0,0,1,2,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,2,2,2,3,2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,3,2,3,0,0,1,2,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,2,1,2,2,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,1,1,0,1,1,0,0,0,1,0,1,0,1,0,1,0,2,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,2,0,2,0,0,2,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,2,0,0,0,2,2,0,0,0,1,0,0,0,0,0}, {0,2,2,3,0,2,0,0,1,2,3,0,1,2,1,1,1,2,1,2,2,2,2,1,0,2,1,1,2,2,3,1,2,0,1,3,1,1,1,1,0,1,1,1,1,2,1,1,1,2,0,2,0,1,1,0,1,2,2,3,1,1,2,1,2,2,0,2,1,2,1,2,3,2,1,1,1,3,2,2,1,1,1,2,2,1,1,0,1,2,1,1,1,0,2,1,1,0,1,2,1,2,1,1,0,2,2,1,0,2,1,2,2,1,2,1,2,2,1,3,3,2,2,1,0,1,2,1,3,0,0,1,2,2,3,1,1,0,2,0,2,2,1,1,2,0,0,1,2,1,0,2,0,2,0,0,1,0,2,1,1,2,3,2,1,2,1,2,1,2,3,2,2,0,2,3,2,1,2,3,2,0,0,0,0,2,2,2,3,3,2,1,2,2,1,2,0,0,0,0,0,1,1,2,2,3,2,2,1,0,1,0,0,0,0,0,0,0,1,2,2,1,2,2,2,2,2,3,2,2,1,2,2,2,2,2,2,2,2,3,2,3,2,2,1,1,1,1,1,1,2,2,1,1,1,1,1,2,1,2,1,0,0,0,3,3,2,2,3,2,1,1,0,1,2,2,0,0,0,1,0,1,0,2,2,3,2,0,0,0,0,0,1,1,1,1,2,1,0,1,0,2,2,2,1,1,0,0,1,2,3,3,2,0,1,2,2,0,1,2,1,2,2,0,1,0,1,3,2,0,0,0,2,1,0,0,1,0,0,0,1,1,3,2,2,0,0,3,2,2,2,0,0,0,0,0,0,2}, {0,2,0,2,0,0,0,0,0,0,2,0,0,1,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,2,0,3,0,0,2,0,0,1,0,0,0,0,0,0,0,0,0,1,2,0,1,0,0,0,0,1,2,0,2,0,0,3,0,0,2,0,0,0,0,0,0,0,2,0,0,1,0,0,0,0,1,1,0,3,0,0,0,0,2,0,0,0,0,2,0,0,0,1,0,0,2,0,1,0,2,2,0,0,0,0,0,0,0,0,2,0,0,1,3,3,0,0,0,0,0,3,1,0,0,0,2,0,0,0,1,0,2,3,0,0,0,0,0,0,0,0,2,1,2,0,0,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,3,2,2,0,2,2,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,2,1,2,0,0,3,2,2,3,3,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,2,0,0,0,0,0,2,2,0,0,0,0,0,0,0,3,2,3,2,0,0,0,0,0,0,0,0,0,3,3,0,0,0,3,2,2,0,0,0,0,0,3,3,2,2,0,0,2,2,0,0,0,0,2,3,0,0,0,0,2,2,0,0,0,3,0,0,0,0,0,0,0,0,0,3,2,2,0,0,2,2,3,2,0,0,0,0,0,0,3}, {0,2,0,2,0,0,2,0,0,0,2,0,0,2,0,0,0,3,0,3,1,2,2,0,3,2,0,3,0,0,2,0,3,0,0,2,0,0,1,0,0,0,0,0,0,0,0,0,2,2,1,3,0,0,0,0,1,2,2,2,0,0,3,0,2,2,0,0,0,1,0,0,0,2,0,0,2,0,0,0,0,1,2,0,3,0,1,0,2,2,0,0,0,3,2,0,1,2,1,2,1,2,0,1,0,2,2,0,2,0,0,2,0,0,0,2,1,2,0,3,3,0,0,0,2,0,3,1,0,2,1,2,0,2,0,2,0,1,3,0,0,0,0,2,0,0,0,2,1,2,2,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,2,2,3,0,3,2,0,0,0,2,2,3,3,0,0,0,0,0,2,0,0,0,2,2,0,0,0,0,0,1,2,2,1,0,2,2,2,2,2,3,3,0,0,0,0,0,0,0,0,0,0,2,2,2,1,2,2,2,0,0,0,0,2,1,1,2,2,1,0,0,3,2,2,2,3,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,0,0,0,0,0,3,2,0,0,0,0,0,0,0,3,3,2,3,2,3,2,0,3,0,0,0,0,2,2,0,0,0,3,3,3,0,0,0,0,0,2,3,3,3,0,0,2,2,0,0,0,0,3,2,0,0,2,3,3,3,2,2,0,2,3,2,0,0,0,0,0,0,0,3,2,3,2,2,2,3,2,2,0,0,0,0,0,0,2}, {0,2,0,2,0,0,0,0,0,0,2,0,0,3,0,0,0,3,0,0,0,1,1,0,0,2,0,0,0,0,2,0,3,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,2,3,0,2,0,0,0,0,0,2,0,2,0,0,3,0,0,2,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,3,0,0,0,0,2,0,0,0,0,2,0,0,0,1,0,0,1,0,2,0,3,2,0,0,0,0,0,0,0,0,1,0,0,0,3,2,0,0,0,0,0,3,1,0,0,0,2,0,0,0,1,0,2,3,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,1,0,0,0,2,3,0,0,0,0,2,3,3,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,2,2,2,3,3,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,2,2,1,0,0,3,2,2,2,3,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,2,2,0,0,0,0,0,2,3,0,0,0,0,0,0,0,2,3,2,3,0,0,0,0,0,0,0,0,0,2,2,0,0,0,2,2,2,0,0,0,0,0,3,2,3,2,0,0,2,3,0,0,0,0,3,3,0,0,0,0,2,2,0,0,0,3,0,0,0,0,0,0,0,0,0,2,2,2,0,0,2,3,3,2,0,0,0,0,0,0,3}, {0,2,0,2,0,1,0,0,0,0,1,1,0,0,0,0,0,2,0,0,1,2,0,0,0,1,0,0,0,0,1,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,2,0,1,0,0,0,0,2,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,2,0,0,0,1,0,2,3,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,3,2,3,0,3,3,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,2,2,1,0,1,0,0,0,0,0,0,0,1,1,1,2,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,1,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,2,0,0,0,0,0,2,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0}, {0,1,0,0,0,0,0,0,0,0,1,0,0,2,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,2,0,3,0,0,2,0,0,1,0,0,0,0,0,0,0,0,1,2,3,0,1,0,0,0,0,0,1,0,1,0,0,3,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,2,1,0,1,0,0,0,0,2,0,0,0,0,1,0,0,0,1,0,0,2,0,3,0,3,2,0,0,0,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,0,2,1,0,0,0,2,0,0,0,2,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,2,2,2,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,3,2,0,0,0,2,1,0,0,0,0,0,0,2,1,2,0,0,0,2,2,0,0,0,0,2,0,0,0,0,0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,2,2,3,0,0,3,2,1,2,0,0,0,0,0,0,2}, {0,0,2,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,3,0,0,0,0,3,0,0,1,0,0,3,0,0,0,0,2,0,0,0,0,0,0,2,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,0,0,0,2,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,2,0,3,2,0,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,3,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,1,0,2,0,0,0,0,2,0,0,0,0,2,0,2,1,0,0,0,2,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,3,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,2,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,2,2,3,2,2,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0}, {0,0,0,3,2,0,0,2,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,3,2,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,3,2,2,0,0,2,2,2,3,3,2,2,2,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,1,1,1,1,2,2,2,2,0,0,0,1,0,1,2,0,0,0,0,0,0,0,1,2,3,2,0,0,0,0,0,0,0,0,0,2,0,1,1,0,2,2,2,0,0,0,0,0,2,2,3,1,1,0,1,1,0,0,0,1,2,3,0,2,0,0,2,2,0,0,0,2,0,0,0,0,0,1,0,0,0,2,3,2,0,0,3,3,1,2,0,0,0,1,0,0,2}, {0,0,2,0,3,0,0,2,0,0,0,0,0,0,3,0,0,0,2,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,1,0,0,0,0,0,0,2,0,0,0,3,2,0,0,0,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,1,0,0,3,0,0,3,0,2,2,0,0,3,0,0,0,0,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,2,0,0,0,0,0,3,2,0,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,1,0,0,0,0,2,0,3,2,0,0,0,2,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,2,2,3,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,3,2,2,3,3,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0}, {3,0,3,0,2,2,0,3,2,2,0,3,2,0,0,2,0,0,0,1,0,3,1,0,0,0,1,1,2,0,0,0,0,2,0,0,3,2,0,2,0,0,1,0,2,0,0,0,0,0,0,0,2,0,1,3,1,0,0,0,2,0,0,2,0,0,2,0,0,0,2,2,3,0,3,0,0,2,3,2,0,0,0,0,0,2,3,0,1,0,0,2,3,0,0,0,2,0,0,2,1,0,2,0,0,0,0,2,0,2,0,0,2,3,3,0,3,0,0,0,0,2,0,0,0,2,0,0,3,0,0,0,3,2,2,0,2,0,0,2,2,1,3,0,2,2,2,0,0,0,0,2,2,3,2,3,2,2,1,1,2,0,0,0,2,2,2,0,0,0,3,0,0,2,2,3,0,0,0,0,2,3,2,2,3,0,0,0,0,0,0,3,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,1,2,2,3,3,2,3,0,2,1,0,0,0,0,3,2,2,1,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,2,3,2,3,3,2,2,2,1,2,2,2,1,2,3,2,2,3,2,0,0,0,0,0,3,3,2,2,2,0,0,2,2,3,0,2,1,2,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,2,1,0,3,0,0,2,2,0,0,0,0,1,0,0,0,0,0,1,2,2,2,1,2,3,0,0,0,1,0,0,0,0,0,2,3,1,1,0,0,0}, {0,0,2,0,3,0,0,2,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,2,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,0,2,0,0,0,2,3,1,0,0,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,3,0,2,2,0,0,2,0,0,0,0,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,2,0,0,0,0,2,3,2,0,0,0,0,0,0,0,0,0,2,0,3,0,0,0,0,1,0,0,0,0,0,0,2,3,0,0,0,2,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,3,3,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,1,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,2,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,0,0,0,0,0,0,0,0,0,2,3,3,0,0,0,0,0,0,0,0,0,3,2,2,2,3,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,2,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, {1,1,2,3,2,1,2,3,2,2,1,1,1,2,1,2,1,2,2,2,1,2,2,2,2,2,1,3,2,2,1,1,1,1,2,1,1,2,1,2,1,3,2,1,0,2,2,1,1,2,3,1,2,2,1,2,1,1,1,1,2,1,3,2,3,2,1,0,2,2,1,2,0,3,3,1,2,1,3,2,1,2,2,3,2,1,1,2,2,2,3,1,2,1,1,1,1,1,3,1,2,1,2,2,2,3,2,3,2,2,3,1,2,2,2,0,2,2,2,2,2,1,2,3,1,1,2,3,2,3,2,3,3,1,2,2,2,2,3,3,2,2,2,1,1,1,2,2,2,1,1,3,1,2,1,2,1,3,2,1,0,1,2,2,1,3,2,2,1,2,2,3,2,2,2,2,2,2,3,2,2,1,2,2,3,2,3,2,3,2,2,2,2,2,1,1,2,2,3,1,2,2,1,2,2,2,2,1,2,3,2,2,2,2,2,2,3,2,2,1,1,1,2,2,1,2,3,2,2,2,2,2,3,2,1,2,3,1,1,2,2,3,2,2,2,2,3,2,2,3,2,2,1,2,1,2,2,2,2,2,2,2,2,3,2,3,2,2,3,2,3,2,1,2,2,2,2,3,3,3,3,3,3,2,2,2,2,1,2,0,1,2,2,3,1,2,2,2,2,2,2,2,2,2,2,3,2,2,3,2,2,3,2,2,1,2,2,2,2,2,2,2,0,3,2,3,3,1,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,1,2,2,0,0,2,3,1,1,2,2,2,2,3}, {0,0,3,0,3,0,0,3,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,0,3,0,1,2,2,3,0,0,0,0,0,0,2,0,0,0,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,0,3,0,2,3,0,0,2,0,2,0,0,0,0,0,0,0,3,0,0,0,0,2,0,0,0,0,0,2,0,0,0,0,2,3,3,0,0,0,0,0,0,0,0,0,3,0,3,0,0,0,0,2,0,0,0,0,3,0,3,3,0,0,0,3,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,3,0,0,0,3,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,3,3,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,3,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,0,3,3,2,0,0,0,0,0,0,0,0,0,3,3,3,3,2,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0}, {55,8,26,40,45,41,18,57,22,30,20,21,22,10,65,40,30,38,23,17,8,51,42,44,22,33,10,17,43,50,50,10,34,15,26,46,51,62,15,35,30,48,46,12,52,60,32,35,41,48,51,19,22,29,25,33,8,40,33,42,36,60,36,21,40,21,34,13,52,48,17,25,33,62,52,27,40,31,27,10,55,30,42,48,22,31,50,43,30,42,22,18,35,60,28,13,20,64,43,20,34,39,60,38,44,36,41,18,39,40,47,16,27,52,25,0,33,46,7,30,29,23,8,44,17,16,55,40,34,29,34,25,70,37,41,32,20,19,61,27,36,40,52,27,30,45,34,27,46,52,28,40,55,32,33,47,35,61,22,10,20,55,67,51,20,22,45,55,56,18,40,30,33,40,42,36,27,56,60,20,7,30,19,52,55,23,50,38,25,18,35,22,52,50,33,44,18,25,52,35,40,55,20,60,33,27,50,70,28,30,53,27,50,42,45,35,30,42,18,25,36,40,35,19,50,47,30,42,55,60,65,47,35,52,60,7,8,25,60,50,33,27,55,62,19,50,40,62,36,27,47,50,35,25,60,22,35,36,10,12,8,35,62,48,30,57,62,36,18,25,16,50,55,27,55,22,70,22,45,40,28,36,27,42,27,50,34,8,19,36,70,52,25,36,50,34,17,24,22,55,12,43,50,36,26,16,32,51,56,47,51,58,27,32,27,62,53,46,37,49,18,46,33,22,44,36,63,56,60,42,32,51,33,68,50,9,16,35,40,22,10,7,25,9,55,45,56,36,75,45,24,40,25,25,36,28,50,35}};
	double y[6][358] = {{0,1,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,0,0,0,0,0,1,1,1,1,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,1}, {1,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,1,0,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0}, {0,0,1,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,1,1,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0}, {0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0}, {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	double tx[358][34];
	double xTx[34][34];
	double yTx[6][34];
	int linha, coluna, tab;
	int pivo = 0, p = 0, m = 0, k = 0;
	double identidade[34][34];
	double a[6][34];
	double teste[34][1] = {{3}, {3}, {3}, {2}, {1}, {0}, {0}, {0}, {1}, {1}, {1}, {0}, {0}, {1}, {0}, {1}, {2}, {0}, {2}, {2}, {2}, {2}, {2}, {1}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {1}, {0}, {8}};
	double resultadoTeste[6][1];
	linha = 34;
	coluna = 34;

	printf("\n----------------------------------------\n");
	printf("---------------Matriz X---------------------\n");
	printf("----------------------------------------\n");
	for(i = 0; i < linhasX; i++){
		for(j = 0; j < colunasX; j++){
			printf(" %.1f", x[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	printf("\n----------------------------------------\n");
	printf("---------------Matriz Y---------------------\n");
	printf("----------------------------------------\n");
	for(i = 0; i < linhasY; i++){
		for(j = 0; j < colunasY; j++){
			printf(" %.1f", y[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	//tx recebe transposta de x
   for (i = 0; i < linhasX; i = i + 1){
		for (j = 0; j < colunasX; j = j + 1){
			tx[j][i] = x[i][j];
		}
   }
	printf("\n----------------------------------------\n");
	printf("---------------Matriz TX (Transposta de X)---------------------\n");
	printf("----------------------------------------\n");
	for(i = 0; i < colunasX; i++){
		for(j = 0; j < linhasX; j++){
			printf(" %.1f", tx[i][j]);
			printf("\t");
		}
		printf("\n");
	}

   //xtX - Recebe a multiplica��o de x por tx
   for(i = 0; i < linhasX; i++){
   		for(j = 0; j < 34; j++){
   			temp = 0;
   			for(k = 0; k < colunasX; k++){
   				temp = temp+x[i][k]*tx[k][j];
   			}
   			xTx[i][j] = temp;
   		}
   	}
   //Mostra xTx. OK
   	printf("\n----------------------------------------\n");
   	printf("---------------Matriz XTX (X multiplcada por TX)---------------------\n");
   	printf("----------------------------------------\n");
	for(i = 0; i < linhasX; i++){
		for(j = 0; j < linhasX; j++){
			printf(" %.1f", xTx[i][j]);
			printf("\t");
		}
		printf("\n");
	}
   //yTx - Multiplica y por Tx.
   for(i = 0; i < linhasY; i++){
   		for(j = 0; j < 34; j++){
   			temp = 0;
   			for(k = 0; k < colunasY; k++){
   				temp = temp+y[i][k]*tx[k][j];
   			}
   			yTx[i][j] = temp;

   		}

   	}

   //mostra yTx
	printf("\n----------------------------------------\n");
	printf("---------------Matriz YTX (Y multiplcada por TX)---------------------\n");
	printf("----------------------------------------\n");
   	for(i = 0; i < 6; i++){
   		for(j = 0; j < 34; j++){
   			printf("%.1f", yTx[i][j]);
   			printf("\t");
   		}
   		printf("\n");
   	}
   	printf("\n\n");


   //Gera Identidade de xTx
	for (linha = 0; linha < 34; linha++) {
		for (coluna = 0; coluna < 34; coluna++) {
			if (linha == coluna) {
				identidade[linha][coluna] = 1;
			} else {
				identidade[linha][coluna] = 0;
			}
		}
	}

//Mostra Identidade de Xtx
		printf("\n----------------------------------------\n");
		printf("---------------Identidade de xTxInv ---------------------\n");
		printf("----------------------------------------\n");
	for (linha = 0; linha < 34; linha++) {
		for (coluna = 0; coluna < 34; coluna++) {
			printf(" %.1f\t", identidade[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n\n");
	//Gerar Inversa de xTx

	for (coluna = 0; coluna < 34; coluna++) {
		pivo = xTx[coluna][coluna];
		for (k = 0; k < 34; k++) {
			xTx[coluna][k] = (xTx[coluna][k]) / (pivo); //L1 -> L1/pivo , L2 -> L2/pivo, L34 -> L3/pivo
			identidade[coluna][k] = (identidade[coluna][k]) / (pivo); //Ex: 1 0 0 / pivo  , 0 1 0 / pivo,   0 0 1/ pivo
		}

		for (linha = 0; linha < 34; linha++) {
			if (linha != coluna) {
				m = xTx[linha][coluna];
				for (k = 0; k < 34; k++) {
					xTx[linha][k] = (xTx[linha][k]) - (m * xTx[coluna][k]); //Ex: L2 -> L2 - ( 1"m" - L1)
					identidade[linha][k] = (identidade[linha][k]) - (m
							* identidade[coluna][k]);
				}
			}
		}
	}

	//Mostrar Inversa de Xtx
	printf("\n----------------------------------------\n");
	printf("---------------Inversa de xTx ---------------------\n");
	printf("----------------------------------------\n");
	for (linha = 0; linha < 34; linha++) {
		for (coluna = 0; coluna < 34; coluna++) {
			printf(" %.10f \t", identidade[linha][coluna]);

		}

		printf("\n");
	}


	//Multiplica yTx por identidade (inversa de xTx)
	   for(i = 0; i < 6; i++){
	   		for(j = 0; j < 34; j++){
	   			temp = 0;
	   			for(k = 0; k < 6; k++){
	   				temp = temp+yTx[i][k]*identidade[k][j];
	   			}
	   			a[i][j] = temp;
	   		}
	   	}
		printf("\n----------------------------------------\n");
		printf("---------------Matriz A. Multiplique com uma matriz que tenha uma coluna  ---------------------\n");
		printf("----------------------------------------\n");
	   //Mostra o A
	   	for (linha = 0; linha < 6; linha++) {
	   		for (coluna = 0; coluna < 34; coluna++) {
	   			printf(" %.6f \t", a[linha][coluna]);

	   		}
	   		printf("\n");
	   	}

	//A=Ymodel*Xmodel'*inv(Xmodel*Xmodel');
	   	//Multiplica-se a matriz A por uma matriz com uma coluna de X para obter o Y(que informar� a doen�a do paciente);

	   	//Multiplicar o teste por A e colocar o valor em resultadoTeste
	    for(i = 0; i < 6; i++){
	    		for(j = 0; j < 1; j++){
	    			temp = 0;
	    			for(k = 0; k < 34; k++){
	    				temp = temp+a[i][k]*teste[k][j];
	    			}
	    			resultadoTeste[i][j] = temp;
	    		}
		}
		printf("\n-----------------------------------------------------\n");
		printf("---------------Doen�a identificada.---------------------\n");
		printf("--------------------------------------------------------\n");
	   	for (linha = 0; linha < 6; linha++) {
	   		for (coluna = 0; coluna < 1; coluna++) {
	   			printf(" %.6f \t", a[linha][coluna]);

	   		}
	   		printf("\n");
	   	}

//	printf("%d", y[0][1]);


    return(0);
}

