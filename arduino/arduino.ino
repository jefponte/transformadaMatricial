/*
  Software serial multple serial test

 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.

 The circuit:
 * RX is digital pin 2 (connect to TX of other device)
 * TX is digital pin 3 (connect to RX of other device)

 Note:
 Not all pins on the Mega and Mega 2560 support change interrupts,
 so only the following can be used for RX:
 10, 11, 12, 13, 50, 51, 52, 53, 62, 63, 64, 65, 66, 67, 68, 69

 Not all pins on the Leonardo support change interrupts,
 so only the following can be used for RX:
 8, 9, 10, 11, 14 (MISO), 15 (SCK), 16 (MOSI).

 created back in the mists of time
 modified 25 May 2012
 by Tom Igoe
 based on Mikal Hart's example

 This example code is in the public domain.

 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void setup()
{
  	// Open serial communications and wait for port to open:
	Serial.begin(115200);
	while (!Serial) {
	  ; // wait for serial port to connect. Needed for Native USB only
	}


	Serial.println("Serial ativa. Bom dia!");

}

void loop() // run over and over
{

	Serial.println("E agora, jose?");
	main2();
	delay(10000);   
}

int main2(void)
{
	float x[2][2] = {1,2,3,4};
	mostraMatriz((float*)x, 2, 2);
	Serial.println("Ola, jef");
	return 0;
}

void mostraMatriz(float *matriz, int linhas, int colunas){
	int i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			Serial.print(matriz[i*colunas+j]);
			Serial.print("\t");
		}
		Serial.println("\n");
	}
}
