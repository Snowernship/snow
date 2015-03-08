void setup(){
}


void loop(){
    int value;
    value = analogRead(0);
    Serial.println(value);
    delay(1000);
}
