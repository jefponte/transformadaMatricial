/*
 ============================================================================
 Name        : Transformadas Matriciais (Arduino)-
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
  Plataforma alvo: Arduino UNO

  O algoritmo original foi obtido em Matlab
  nas aulas do mestrado Teleinformática,
  na disciplina em Inteligência Computacional
  Aplicada com o professor Guilherme de
  Alencar Barreto em 22/02/2019
 ============================================================================
 */
#include <SoftwareSerial.h>



void setup()
{
  	// Open serial communications and wait for port to open:
	Serial.begin(115200);
	while (!Serial) {
	  ; // wait for serial port to connect. Needed for Native USB only
	}
  Serial.println("Inicio da aplicacao...");
}

void loop() // run over and over
{
	main2();
  Serial.println("\nFim da aplicacao...");
	delay(50000);   
  Serial.println("\nReiniciar aplicacao...\n");
}

  	
int main2(void)
{
  float b[3][3] = {1, 2, 3, 0, 1, 4, 0, 0, 1};
  float resultado[3][3];
  Serial.println("\n------------------------\n");
  mostraMatriz((float*)b, 3, 3);
  Serial.println("\n------Inversa de B----------\n");
  inversa((float*)b, 3, (float*)resultado);
  mostraMatriz((float*)resultado, 3, 3);

	return 0;
}
/**
 * Calcula inversa de uma matriz quadrada de ordem m.
 */
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
/**
 * Calcula a transposta da matriz de n linhas e m colunas. 
 */
void transposta(float *matriz, int linhas, int colunas, float *transposta)
{
	int i, j;
	for (i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			transposta[j*linhas+i] = matriz[i*colunas+j];
		}
   }
}
/**
 * Multiplica a matriz a pela matriz b. 
 */
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

/**
 * Cria matriz identidade de uma matriz quadrada.
 */
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
/**
 * Exibe uma matriz nXm
 */
void mostraMatriz(float *matriz, int linhas, int colunas){
	int i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
        Serial.print(matriz[i*colunas+j]);
        Serial.print("\t");
        delay(500); 
		}
		Serial.print("\n");
	}
}
/**
 * Exibe o diagnóstico gerado. 
 */
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
		Serial.println("Psoriase");
		break;
	case 1:
		Serial.println("Dermatite seborreica");
		break;
	case 2:
		Serial.println("Liquen Plano");
		break;
	case 3:
		Serial.println("Pititríase rosea");
		break;
	case 4:
		Serial.println("Dermatite cronica");
		break;
	case 5:
		Serial.println("Pitiriase rubra pilar");
		break;
	}
}
