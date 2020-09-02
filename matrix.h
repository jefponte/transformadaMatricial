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

#ifndef MATRIX_H_
#define MATRIX_H_



/**
 * Faz a transposta da matriz M e põe o resultado em transposta.
 * O número de linhas é trocado pelo número de colunas e o
 * número de colunas é trocado pelo número de linhas.
 */
void transposta(float *matriz, int linhas, int colunas, float *transposta);

/**
 * Realiza a operação de multiplicação de matrizes: AXB e põe o resultado na matriz
 * resultado.
 * Retorno 0 indica erro, as matrizes devem ser compatíveis para esta operação
 * (O número de colunas da matriz A deve ser igual ao número de linhas da Matriz B).
 * Os ponteiros para inteiros das linhas e colunas da matriz resultado atualizarão
 * o resultado do número de linhas e colunas da nova matriz.
 * (A matriz resultado terá o número de linhas de A e o Número de Colunas de B).
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
 * Calcula a identidade da matriz quadrada e põe o resultado apontando
 * para o endereço de resultado.
 */
void identidade(float *matriz, float *resultado, int ordem);
/**
 * Recebe uma matriz e mostra o diagnostico.
 */
void exibirDiagnostico(float *matriz);


#endif /* MATRIX_H_ */
