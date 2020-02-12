#define LED_PIN 2
#define LED_BUILTIN 2

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

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}

void loop() {
  for (int i = 0; i < 100 ; i++) {
    dimmer(10, i);
  }
  for (int i = 100; i > 0 ; i--) {
    dimmer(10, i);
  }
}
