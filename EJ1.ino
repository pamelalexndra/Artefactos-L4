const int TOUCH_PIN = 4;        
const int UMBRAL_PRUEBA = 100;   

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  Serial.println("=== CALIBRACION DE UMBRAL TOUCH ===");
  Serial.println("Toca y suelta el pin para ver el comportamiento.");
  Serial.println();
}

void loop() {
  int valorTouch = touchRead(TOUCH_PIN);

  Serial.print("Valor Touch: ");
  Serial.print(valorTouch);

  if (valorTouch < UMBRAL_PRUEBA) {
    Serial.println("  --> [ ¡TOCADO! ]");
  } else {
    Serial.println("  --> [ LIBRE ]");
  }

  delay(200);
}