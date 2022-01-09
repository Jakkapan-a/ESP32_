#define LED_PIN_13 13

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN_13, OUTPUT);
}
void loop()
{
    // Serial.println("Hello World!");
    digitalWrite(LED_PIN_13, HIGH);
    delay(1000);
    digitalWrite(LED_PIN_13, LOW);
    delay(1000);
}