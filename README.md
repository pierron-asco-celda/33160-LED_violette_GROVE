# 33160-LED violette GROVE

LED violette GROVE [33160](https://www.pierron.fr/modules-led-grove.html)

<div style="text-align: justify">Ce module "LED GROVE" est conçu pour les débutants il permet de surveiller les contrôles des ports numériques. Il peut être monté facilement à la surface de votre boîte ou de votre bureau et utilisé comme lampe pilote pour la puissance ou le signal. Sa luminosité peut être ajustée par le potentiomètre présent sur le module.</div>

Caractéristiques techniques :
- Alimentation : 3.3-5V
- Consommation : 20 mA

![33160](/img/L-33160.jpg)

# Usage :
Pour l’utilisation de ce module référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Exemple :
### Arduino / C++
```cpp
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
```
## À propos :

PIERRON ASCO-CELDA (https://www.pierron.fr).
