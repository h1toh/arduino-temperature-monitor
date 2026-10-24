
const int sensor = A0;
const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(sensor);

  float tensao = leitura * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100.0;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  if (temperatura > 30.0) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(1000);
}
