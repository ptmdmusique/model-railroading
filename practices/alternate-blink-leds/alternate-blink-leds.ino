const int BAUD_RATE = 9600;

const int LED1 = 2;
const int LED2 = 3;

const int DELAY = 250;

void setup() {
  Serial.begin(BAUD_RATE);  // Initialize Serial Monitor
  pinMode(LED1, OUTPUT);    // Defining LED1 pin as OUTPUT Pin.
  pinMode(LED2, OUTPUT);    // Defining LED2 pin as OUTPUT Pin.

  Serial.println("Alternate Blink LEDs Program");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void blink_led(uint8_t pin, unsigned long on_delay) {
  Serial.println("Pin: " + String(pin) + " ON");
  digitalWrite(pin, HIGH);  // LED gets turned ON (1/HIGH/+5V)
  delay(on_delay);          // Waiting

  Serial.println("Pin: " + String(pin) + " OFF");
  digitalWrite(pin, LOW);  // LED gets OFF (0/LOW/0V/GND)
}

void loop() {
  blink_led(LED1, DELAY);
  blink_led(LED2, DELAY);
}
