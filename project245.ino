float floatMap(float x, float in_min, float in_max, float out_min, float out_max){
  return(x - in_min)*(out_max - out_min)/(in_max-in_min) + out_min;
}

void setup() {
  Serial.begin(9600);
}

void loop() {
    int analogValue = analogRead(POTENTIOMETER_PIN);
    int brightness = map(analogValue, 0, 4095, 0, 255);
    if (brightness > 200) {
        Serial.println("decrease the volume ");
        digitalWrite(buzzer_gpio, HIGH);
        delay(100);
        }
    digitalWrite(buzzer_gpio, LOW);
    Serial.println(brightness);
    delay(30);
}