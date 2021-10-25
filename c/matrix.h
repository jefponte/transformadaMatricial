/*
 ============================================================================
 Name        : Transformadas Matriciais (Raspberry Pi)-
 Reconhecimento de Padr�es no Aux�lio ao
 Diagn�stico M�dico dermatol�gico
 Author      : Jefferson Uch�a Ponte/Gilmaicor Leandro Oliveira
 Version     :1.0
 Copyright   : Copyright 2020 by JEFFERSON UCHOA PONTE
 IFCE - All rights reserved.
 Description : Utiliza��o de transformadas matriciais
 no aux�lio ao diagn�stico m�dico.


	Trabalho para a disciplina Sistemas
	Embarcados no IFCE em 2020.
	Plataforma alvo: Raspberry PI Sistema Linux

	O algoritmo original foi obtido em Matlab
	nas aulas do mestrado Teleinform�tica,
	na disciplina em Intelig�ncia Computacional
	Aplicada com o professor Guilherme de
	Alencar Barreto em 22/02/2019

 ============================================================================
 */

#ifndef MATRIX_H_
#define MATRIX_H_





/**
 * Faz a transposta da matriz M e p�e o resultado em transposta.
 * O n�mero de linhas � trocado pelo n�mero de colunas e o
 * n�mero de colunas � trocado pelo n�mero de linhas.
 */
void transposta(float *matriz, int linhas, int colunas, float *transposta);

/**
 * Realiza a opera��o de multiplica��o de matrizes: AXB e p�e o resultado na matriz
 * resultado.
 * Retorno 0 indica erro, as matrizes devem ser compat�veis para esta opera��o
 * (O n�mero de colunas da matriz A deve ser igual ao n�mero de linhas da Matriz B).
 * Os ponteiros para inteiros das linhas e colunas da matriz resultado atualizar�o
 * o resultado do n�mero de linhas e colunas da nova matriz.
 * (A matriz resultado ter� o n�mero de linhas de A e o N�mero de Colunas de B).
 */
int multiplica(
		float *a, int linhasA, int colunasA,
		float *b, int linhasB, int colunasB,
		float *resultado, int *linhasR, int *colunasR);
/**
 * Calcula inversa de uma matriz quadrada de ordem m.
 */
void inversa(float *matriz, int ordem, float *resultado);

/**
 * Percorre e exibe os valores de uma matriz.
 */
void mostraMatriz(float *matriz, int linhas, int colunas);
/**
 * Calcula a identidade da matriz quadrada e p�e o resultado apontando
 * para o endere�o de resultado.
 */
void identidade(float *matriz, float *resultado, int ordem);
/**
 * Recebe uma matriz e mostra o diagnostico.
 */
void exibirDiagnostico(float *matriz);


#endif /* MATRIX_H_ */
