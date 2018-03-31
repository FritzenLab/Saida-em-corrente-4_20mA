
#define analogOutput 9    // Saída PWM controlada pelo potenciômetro (referência para o 4-20mA)
#define analogRef A0  // Entrada analógica lendo o potenciômetro

int intOutput = 51; // valor mínimo de PWM para que a saída em corrente seja 4mA
int analogRefValue = 0; // 

void setup() {
  analogWrite(analogOutput, intOutput); // Escreve o valor 51 (~4mA) na saída PWM (pino 9)
}

void loop() {

  analogRefValue= analogRead(analogRef); // faz a leitura do potenciômetro referência
  intOutput = map(analogRefValue, 0, 1023, 30, 255); // mapeia o valor do potenciômetro, de 0-1023 para 51-255
  analogWrite(analogOutput, intOutput); // Escreve no pino 9 o valor de PWM referente á corrente desejada (51-255 = 4-20mA)
  delay(100); // Espera 0,1 segundos e repete tudo novamente
   
  }

