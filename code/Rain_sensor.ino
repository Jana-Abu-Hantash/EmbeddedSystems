
int RAIN_SENSOR_PIN = 0; 
void setup() {
  Serial.begin(9600);
  pinMode(RAIN_SENSOR_PIN, INPUT);
}

void loop() {
  int rainState = analogRead(RAIN_SENSOR_PIN);
  Serial.println(rainState);
}
