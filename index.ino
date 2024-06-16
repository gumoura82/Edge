const int tempPin = A0;
const int humPin = A1;
const int ldrPin = A2;
const int ledPinVerde = 13;
const int ledPinAmarelo = 12;
const int ledPinVermelho = 11;
const int motorPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(ledPinVermelho, OUTPUT);
  pinMode(ledPinAmarelo, OUTPUT);
  pinMode(ledPinVerde, OUTPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Leitura do sensor de temperatura
  int tempReading = analogRead(tempPin);
  float voltage = tempReading * 5.0 / 1024.0;
  float temperatureC = voltage * 100;

  // Leitura do sensor de umidade
  int humReading = analogRead(humPin);
  float humidity = map(humReading, 0, 1023, 0, 100);

  // Leitura do sensor de luz
  int lightLevel = analogRead(ldrPin);

  // Exibir os valores lidos
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" *C\t");
  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  // Controle do LED baseado no nível de luz
  if (lightLevel > 500) {
    digitalWrite(ledPinVermelho, LOW);
    digitalWrite(ledPinVerde, HIGH);
    digitalWrite(ledPinAmarelo, LOW);
  } else if (lightLevel > 300){
    digitalWrite(ledPinVermelho, LOW);
    digitalWrite(ledPinVerde, LOW);
    digitalWrite(ledPinAmarelo, HIGH);
  } else{
    digitalWrite(ledPinVermelho, HIGH);
    digitalWrite(ledPinVerde, LOW);
    digitalWrite(ledPinAmarelo, LOW);
  }

  // Controle do motor baseado na temperatura
  if (temperatureC > 30) {
    digitalWrite(motorPin, HIGH);
  } else {
    digitalWrite(motorPin, LOW);
  }

  delay(2000);
}