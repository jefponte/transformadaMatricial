#include <stdio.h>
#include <stdlib.h>


/**
 * Faz a transposta da matriz M e p�e o resultado em transposta.
 * O n�mero de linhas � trocado pelo n�mero de colunas e o n�mero de colunas � trocado pelo n�mero de linhas.
 */
void transposta(double *matriz, int linhas, int colunas, double *transposta);

/**
 * Realiza a opera��o de multiplica��o de matrizes: AXB e p�e o resultado na matriz resultado.
 * Retorno 0 indica erro, as matrizes devem ser compat�veis para esta opera��o(O n�mero de colunas da matriz A deve ser igual ao n�mero de linhas da Matriz B).
 * Os ponteiros para inteiros das linhas e colunas da matriz resultado atualizar�o o resultado do n�mero de linhas e colunas da nova matriz.
 * (A matriz resultado ter� o n�mero de linhas de A e o N�mero de Colunas de B).
 */
int multiplica(
		double *a, int linhasA, int colunasA,
		double *b, int linhasB, int colunasB,
		double *resultado, int *linhasR, int *colunasR);
/**
 * Calcula inversa de uma matriz quadrada de ordem m.
 */
void inversa(double *matriz, int ordem, double *resultado);

/**
 * Percorre e exibe os valores de uma matriz.
 */
void mostraMatriz(double *matriz, int linhas, int colunas);
/**
 * Calcula a identidade da matriz quadrada e p�e o resultado apontando para o endere�o de resultado.
 */
void identidade(double *matriz, double *resultado, int ordem);


int main(void)
{
	double a[3][3] = {{2,1,0},{0, 1, 0},{1,2, 1}};
	double resultado[3][3] = {{2,1,0},{0, 1, 0},{1,2, 1}};
	mostraMatriz(a, 3, 3);
	inversa(a, 3, resultado);
	printf("\n--------------------\n");
	mostraMatriz(resultado, 3, 3);
	return 0;
}

void inversa(double *matriz, int ordem, double *resultado){
	int linha, coluna, k;
	double pivo, m;
	identidade(matriz, resultado, ordem);


	for(coluna = 0; coluna < 3; coluna++){
	    pivo = matriz[coluna*ordem+coluna];
		for(k = 0; k < 3; k++){
			matriz[coluna*ordem+k] = (matriz[coluna*ordem+k])/(pivo); //L1 -> L1/pivo , L2 -> L2/pivo, L3 -> L3/pivo
			resultado[coluna*ordem+k] = (resultado[coluna*ordem+k])/(pivo); //Ex: 1 0 0 / pivo  , 0 1 0 / pivo,   0 0 1/ pivo
		}

		for(linha = 0; linha < 3; linha++){
			if(linha != coluna){
				m = matriz[linha*ordem+coluna];
				for(k = 0; k < 3; k++){
					matriz[linha*ordem+k] = (matriz[linha*ordem+k]) - (m*matriz[coluna*ordem+k]); //Ex: L2 -> L2 - ( 1"m" - L1)
					resultado[linha*ordem+k] = (resultado[linha*ordem+k]) - (m*resultado[coluna*ordem+k] );

				}
			}
		}
	}


}
void transposta(double *matriz, int linhas, int colunas, double *transposta)
{
	int i, j;
	for (i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			transposta[j*linhas+i] = matriz[i*colunas+j];
		}
   }
}

int multiplica(
		double *a, int linhasA, int colunasA,
		double *b, int linhasB, int colunasB,
		double *resultado, int *linhasR, int *colunasR)
{
	int i, j, k;//Vari�veis para controle de la�os.
	if(colunasA != linhasB){
		printf("Erro na multiplica��o: Matrizes incompat�veis para esta opera��o.\t\n");
		return 0;
	}
	*colunasR = colunasB;
	*linhasR = linhasA;
	for(i = 0; i < linhasA; i++){
		for(j = 0; j < colunasB; j++){
			resultado[i*colunasB+j] = 0.0;
			for(k = 0; k < colunasA; k++){
				resultado[i*(colunasB)+j] += a[i*colunasA+k]*b[k*colunasB+j];
			}
		}
	}
	return 1;
}


void identidade(double *matriz, double *resultado, int ordem){
	int i, j;
	for (i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			if (i == j)
			{
				resultado[i*ordem+j] = 1;
			} else {
				resultado[i*ordem+j] = 0;
			}
		}
	}
}
void mostraMatriz(double *matriz, int linhas, int colunas){
	int i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%.1f\t", matriz[i*colunas+j]);
		}
		printf("\n");
	}
}
