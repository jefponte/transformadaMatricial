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

void main2()
{
  float a[6][34] = {{2.2704519, 2.7787329, 1.6132070, 4.7673651, 1.4725547,-9.0375773,-5.7366348, 1.4536696, 1.3752446,-1.7010889, 2.7898977,-1.5656407,-6.7948817, 5.0820905,-9.7088623,-2.1097331,-5.6952202, 4.7233587,-1.8654948, 1.0178103, 7.0584454, 1.1128639, 4.6885475, 3.3404944,-1.9815618, 1.8708605, 9.6329617,-6.2791093,-1.6407801,-5.2202656, 6.4057614, 5.4388179,-9.8402028, 8.9470613}, { 1.2552094, 6.4705289,-3.1909575, 9.5593064,-1.3424153,-5.7579081, 3.6307113,-3.4559471, 1.1829042,-8.2159554,-3.6283503,-3.4202655, 1.3985033, 9.1597617,-8.3268702, 5.0630446, 2.3841863,-4.5643948,-3.4093676,-4.1530712,-4.1013727, 2.7195574,-1.7715070, 1.2080903, 2.2467331,-4.4127287,-5.4509881, 9.3374424,-3.8643432,-1.6432860,-1.6006597,-2.8985152, 3.8876793,-4.7652977}, { 7.9969065,-8.9842366,-1.5421763, 2.2110104,-7.2794967, 9.5720445,-3.0478295, 4.3327634,-4.5228306,-3.6854571, 1.7147598, 1.4711449,-2.5236096,-8.8801453,-3.8100828, 2.4506126, 1.7482714, 2.3306095, 7.5442664,-5.3089216,-1.1411112, 2.6957557, 1.0080414, 6.0259292, 4.1294371, 5.8967015, 2.1797625,-8.3311834, 7.8318833,-2.7256788, 7.8541814, 5.5393736, 1.1969017, 1.2030698}, { 1.5069802,-3.5190883, 3.8579779,-9.9156531, 1.7634370,-7.0952979, 1.2364292,-3.7246607,-4.2339563, 1.0472215,-2.9958365,-5.5576548,-9.9866125,-7.1674223,-2.1264902, 5.2033382, 3.3129057,-3.2672905, 5.7419492,-5.4440309,-6.1208230,-6.5951498,-1.0703042,-8.9847203,-4.7019413, 3.8537484, 2.7170030, 3.8501160,-1.1264717,-7.3737350,-8.5387109, 5.2617242,-5.6261134, 2.4005573}, { 1.2682263,-2.9337759,-8.3065273, 1.1550570,-1.2125758,-2.0107666, 5.7943976,-1.5215889, 8.9171934, 6.6630893,-1.3352946, 1.6073103,-2.7373369,-1.8539506, 3.0192226,-5.0412639, 1.3296088, 4.1539604,-4.9730795,-3.5577013, 5.7378342,-4.0273721,-1.1965798,-1.4569869, 1.9679719,-9.1536589, 2.4795372,-2.2130476,-2.2940499, 5.9743272,-1.2499255, 1.9726931,-2.4234439, 4.3846740}, { 2.6803798, 9.5997392,-1.7125384, 2.3292346,-1.7517142, 7.8267477, 4.9562514,-4.6332282, 2.7032375,-1.4544708, 4.7562760, 1.0803813, 2.9022642,-2.9781038,-9.7243947,-1.1119055, 1.0318547, 2.6418986,-5.0144105, 5.2822519,-9.7278112,-1.4282693,-3.8310243,-2.8392009, 6.3753645,-2.0621210,-9.9196105, 8.6294202, 1.7944087, 2.3468405, 3.5889974, 5.3794788, 3.8402739,-1.3034574}};
  float teste[34][1] = {{3}, {2}, {2}, {1}, {3}, {3}, {0}, {3}, {0}, {0}, {0}, {3}, {0}, {0}, {0}, {3}, {2}, {0}, {3}, {0}, {0}, {0}, {0}, {0}, {2}, {0}, {3}, {3}, {3}, {0}, {0}, {2}, {2}, {34}};//Coluna 1
  float resultado[6][1];//Coluna 1
  Serial.println("Iniciando aplicacao...");
  
  multiplica((float*)a, 6, 34, (float*)teste, 34, 1, (float*)resultado);
  exibirDiagnostico((float*)resultado);
  Serial.println("Matriz resultado\n");
  mostraMatriz((float*)resultado, 6, 1);
}

int multiplica(
    float *a, int linhasA, int colunasA,
    float *b, int linhasB, int colunasB,
    float *resultado)
{
  int i, j, k;//Variáveis para controle de laços.
  if(colunasA != linhasB){
    Serial.println("Erro na multiplicação: Matrizes incompatíveis para esta operação.\t\n");
    return 0;
  }

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
/**
 * Passe um ponteiro apontando para uma matriz 6X1
 * 
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
  Serial.print("Diagnostico: ");
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
