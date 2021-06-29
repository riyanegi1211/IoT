void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); //Turn the LED on
  delay(1000);                     //wait for a second
  digitalWrite(LED_BUILTIN, LOW);  //Turn the LED off
  delay(1000);                     //wait for a second

}
