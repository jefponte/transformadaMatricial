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
  delay(200000); 
}
void main2(){
  
  float resultado[6][1] = {{1}, {0}, {0}, {0}, {0}, {0}};//Coluna 1
  Serial.println("Iniciando aplicacao...");
  mostraMatriz((float*)resultado, 6, 1);
    
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
void mostraMatriz(float *matriz, int linhas, int colunas){
  int i, j;
  for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
        Serial.print(matriz[i*colunas+j]);
        Serial.print("\t");
    }
    Serial.print("\n");
  }
}
