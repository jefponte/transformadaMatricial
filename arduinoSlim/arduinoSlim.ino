/*
 ============================================================================
 Name        : Transformadas Matriciais -
 Reconhecimento de Padrões no Auxílio ao
 Diagnóstico Médico dermatológico
 Author      : Jefferson Uchôa Ponte
 Version     :1.0
 Copyright   : Copyright 1996-1998 by JEFFERSON UCHOA PONTE
 IFCE - All rights reserved.
 Description : Utilização de transformadas matriciais
 no auxílio ao diagnóstico médico.


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

}

void loop() // run over and over
{
  main2();
  delay(20000);  
}

float a[6][34] = {{ 2.3553119e-02, 3.3456104e-02, 1.2522390e-02,-3.0463585e-04, 1.6571731e-02,-4.8659461e-03,-3.8679046e-02, 2.6290355e-02, 3.0424879e-02,-2.7531336e-02,-5.2261139e-03,-2.5632180e-02,-1.0262576e-02, 4.6846406e-02,-8.1603292e-02,-3.1365883e-02,-5.7859616e-03, 2.8570218e-02, 3.5398513e-04, 1.4163056e-01, 5.9091526e-02, 9.1495508e-02, 1.4446474e-02, 4.5455598e-02,-1.8965329e-02,-1.7197727e-03, 2.0085720e-02,-4.7664761e-02,-9.3960748e-03,-2.9659255e-02, 2.2508706e-02, 1.2458692e-02,-1.1650216e-02, 4.1413203e-04 }, { 5.0353234e-03, 5.0441829e-02, 7.2345061e-04, 8.5999615e-02,-1.2214293e-01,-8.4332828e-02,-1.6905041e-02,-2.6649546e-02, 1.2940740e-02,-7.6538059e-03,-1.5975936e-02, 1.5380615e-03, 1.4187520e-01, 9.4642235e-02,-7.6129931e-02, 5.7497787e-02, 2.7357089e-02,-3.3849413e-02,-3.1067401e-02,-3.4200715e-02,-3.9041114e-02, 2.0259658e-02,-2.2728137e-02, 2.0019617e-02,-8.6226777e-03,-5.0559478e-02,-5.7952849e-03, 8.1190540e-02,-6.5753644e-02, 5.2805137e-03,-1.2388473e-01,-2.4888950e-02, 3.2412051e-02, 5.7764975e-04 }, { 9.6209327e-03,-1.1647050e-02,-4.4202691e-03,-5.1420070e-04,-6.0654653e-03, 9.4383539e-02,-1.6365710e-02, 3.1039930e-02,-6.7507049e-03,-3.2668836e-03, 4.2944848e-03, 1.9947744e-02,-4.5321769e-03,-5.9797997e-03, 5.8253513e-03, 1.3734355e-03,-2.7509458e-03, 9.7141766e-03, 5.7066341e-03,-1.3324434e-03,-9.0322001e-03, 2.1985994e-03, 1.0109907e-02, 7.9028821e-03, 4.2387748e-02, 7.6619454e-03, 3.3671256e-02,-2.3418208e-03, 9.1959654e-02,-1.1397877e-02, 2.0959904e-02, 6.6514515e-03, 1.0658121e-01, 1.0524019e-04 }, { 3.7464871e-02,-3.6442652e-02, 3.4744928e-02,-8.7623568e-02, 1.5727463e-01,-3.0010312e-02, 1.5495454e-02,-4.8568328e-02,-2.3956795e-02, 1.7407958e-02,-4.0720830e-02,-7.3562760e-02,-1.0446362e-01,-7.3857927e-02,-4.1477681e-02, 5.7238362e-02, 1.4541947e-02, 1.4740611e-02, 5.0967755e-02,-2.8613101e-02,-5.1995404e-02,-7.3840035e-02,-1.3192771e-02,-3.1952208e-02,-1.5088763e-02, 5.7951717e-02, 1.8623584e-03, 4.1158573e-02,-3.2296174e-02,-6.1968922e-02,-9.5901567e-02, 4.5902261e-02,-5.1650815e-02, 2.2311066e-03 }, { 1.7562608e-03, 4.2586496e-03,-1.0557487e-02, 1.2526313e-02,-1.6130478e-02,-1.6736502e-02, 8.0760049e-02,-3.4787098e-02,-7.2362638e-03,-3.5059528e-03,-7.5867390e-03, 1.4801067e-02,-1.9467572e-02,-2.1291786e-02, 2.8587707e-01,-7.6090410e-03, 1.9812694e-02, 6.9053098e-04, 4.6661958e-03,-4.5870962e-02, 6.2908134e-02,-3.2288509e-02,-1.1592364e-02,-1.9283855e-02, 1.4916373e-02,-5.3837863e-03,-1.1842841e-02,-2.8438979e-02,-2.4422750e-02, 5.8681213e-02,-1.4171668e-01, 2.6874491e-02, 1.6958618e-02, 5.0970564e-04 }, { 6.4583396e-03, 3.3716756e-03, 5.4215740e-03, 2.3592832e-03,-8.4672608e-04,-5.1379785e-03, 9.4582656e-02, 2.6978851e-03, 1.4925241e-02, 5.2802860e-03, 4.3020075e-02,-4.6534916e-03, 3.3238406e-03,-7.1356110e-03,-6.6348116e-03,-6.4429627e-03,-1.9666897e-03,-8.2928650e-03,-3.9083600e-03,-2.3745466e-03,-2.4313671e-03,-9.9176330e-03,-4.8043815e-03,-6.2006162e-03,-2.2439767e-03,-4.2911121e-03,-4.3086099e-03, 2.2520640e-04,-6.5768740e-04,-9.3912547e-03, 3.4237513e-01,-1.2232262e-03, 1.1136259e-02,-9.1823260e-05 }};

void main2(){

  float xTeste[34][1] = {{1}, {1}, {0}, {2}, {0}, {0}, {1}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {2}, {1}, {2}, {1}, {0}, {0}, {1}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {2}, {0}, {18}};//Coluna 13
  float yResultado[6][1];
  Serial.println("Vamos verificar!");
  multiplica(a, xTeste, yResultado);
  exibirDiagnostico(yResultado);
  delay(1000); 
  mostraMatriz(yResultado);

}

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
    float a[6][34],
    float b[34][1],
    float resultado[6][1])
{
  int i, j, k;//Variáveis para controle de laços.
  for(i = 0; i < 6; i++){
    for(j = 0; j < 1; j++){
      resultado[i][j] = 0.0;
      for(k = 0; k < 34; k++){
        resultado[i][j] += a[i][k]*b[k][j];
      }
    }
  }
  return 1;
}
/**
 * Calcula a identidade da matriz quadrada e põe o resultado apontando
 * para o endereço de resultado.
 */
void mostraMatriz(float matriz[6][1]){
  int i, j;
  for(i = 0; i < 6; i++){
    for(j = 0; j < 1; j++){
        Serial.print(matriz[i][j]);
        Serial.print("\t");
    }
    Serial.print("\n");
  }
}
/**
 * Recebe uma matriz e mostra o diagnostico.
 */
void exibirDiagnostico(float matriz[6][1]) {
  int linhas = 6;
  int colunas = 1;
  int i, j, index = 0;
  float maior = 0.0;
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
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
    Serial.println("Pititriase rosea");
    break;
  case 4:
    Serial.println("Dermatite cronica");
    break;
  case 5:
    Serial.println("Pitiriase rubra pilar");
    break;
  }
}
