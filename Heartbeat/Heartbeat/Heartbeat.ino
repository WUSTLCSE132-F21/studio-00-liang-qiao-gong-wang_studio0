void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  int time = millis();
  Serial.print("Time elapsed: ");
  int result = (time+1) / 1000;
  Serial.println(result);

}
