/*
 *   ** Cycle clignotant 1s LED violette GROVE **
 *     PIN D7 Module shield GROVE
*/
#define LED 7

void setup() {
    pinMode(LED, OUTPUT);
}
 
void loop() {
    digitalWrite(LED, HIGH);   
    delay(1000);               
    digitalWrite(LED, LOW);   
    delay(1000);
}
