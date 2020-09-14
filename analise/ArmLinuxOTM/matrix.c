/*
 ============================================================================
 Name        : Transformadas Matriciais (Raspberry Pi)-
 Reconhecimento de Padrões no Auxílio ao
 Diagnóstico Médico dermatológico
 Author      : Jefferson Uchôa Ponte/Gilmaicor Leandro Oliveira
 Version     :1.0
 Copyright   : Copyright 2020 by JEFFERSON UCHOA PONTE
 IFCE - All rights reserved.
 Description : Utilização de transformadas matriciais
 no auxílio ao diagnóstico médico.


	Trabalho para a disciplina Sistemas
	Embarcados no IFCE em 2020.
	Plataforma alvo: Raspberry PI Sistema Linux

	O algoritmo original foi obtido em Matlab
	nas aulas do mestrado Teleinformática,
	na disciplina em Inteligência Computacional
	Aplicada com o professor Guilherme de
	Alencar Barreto em 22/02/2019

 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


void inversa(float *matriz, int ordem, float *resultado){
	int linha, coluna, k;
	float pivo, m;
	identidade(matriz, resultado, ordem);


	for(coluna = 0; coluna < ordem; coluna++){
	    pivo = matriz[coluna*ordem+coluna];
		for(k = 0; k < ordem; k++){
			matriz[coluna*ordem+k] = (matriz[coluna*ordem+k])/(pivo); //L1 -> L1/pivo , L2 -> L2/pivo, L3 -> L3/pivo
			resultado[coluna*ordem+k] = (resultado[coluna*ordem+k])/(pivo); //Ex: 1 0 0 / pivo  , 0 1 0 / pivo,   0 0 1/ pivo
		}

		for(linha = 0; linha < ordem; linha++){
			if(linha != coluna){
				m = matriz[linha*ordem+coluna];
				for(k = 0; k < ordem; k++){
					matriz[linha*ordem+k] = (matriz[linha*ordem+k]) - (m*matriz[coluna*ordem+k]); //Ex: L2 -> L2 - ( 1"m" - L1)
					resultado[linha*ordem+k] = (resultado[linha*ordem+k]) - (m*resultado[coluna*ordem+k] );

				}
			}
		}
	}


}
void transposta(float *matriz, int linhas, int colunas, float *transposta)
{
	int i, j;//Variáveis para controle do laço.
	for (i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			transposta[j*linhas+i] = matriz[i*colunas+j];
		}
   }
}

int multiplica(
		float *a, int linhasA, int colunasA,
		float *b, int linhasB, int colunasB,
		float *resultado, int *linhasR, int *colunasR)
{
	int i, j, k;//Variáveis para controle de laços.
	if(colunasA != linhasB){
		printf("Erro na multiplicação: Matrizes incompatíveis para esta operação.\t\n");
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


void identidade(float *matriz, float *resultado, int ordem){
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
void mostraMatriz(float *matriz, int linhas, int colunas){
	int i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%.4f\t", matriz[i*colunas+j]);
		}
		printf("\n");
	}
}

void exibirDiagnostico(float *matriz) {
	int linhas = 6;
	int colunas = 1;
	int i, j, index = 0;
	float maior = 0.0;
	for (i = 0; i < linhas; i++) {
		for (j = 0; j < colunas; j++) {
			if (matriz[i * colunas + j] > maior) {
				maior = matriz[i * colunas + j];
				index = i;
			}
		}
	}
	switch (index) {
	case 0:
		printf("Psoríase");
		break;
	case 1:
		printf("Dermatite seborréica");
		break;
	case 2:
		printf("Líquen Plano");
		break;
	case 3:
		printf("Pititríase rósea");
		break;
	case 4:
		printf("Dermatite crônica");
		break;
	case 5:
		printf("Pitiríase rubra pilar");
		break;
	}
}
