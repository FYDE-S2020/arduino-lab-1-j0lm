#define LED_PIN 2

void setup() {
  // put your setup code here, to run once:
 pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int time){
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(time);                       // wait for a second  
  }

void loop() {
timedBlink(250);
timedBlink(500);
timedBlink(1000);
}
