int led = D7;

int unit = 500;

// Morse Code rules:
// 1. The length of a dot is one unit (500)
// 2. A dash is three units (500 * 3)
// 3. The space between parts of the same letter is one unit. (set the LED to off for one unit after each blink)
// 4. The space between letters is three units. (set the LED to off for three units after each letter)
// 5. The space between words is seven units. (set the LED to off for seven units after each word)

// Code for a "short blink" in morse code
void shortBlink() {
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led,LOW);
    delay(unit);
}

// Code for a "long blink" in morse code
void longBlink() {
    digitalWrite(led,HIGH);
    delay(unit * 3);
    digitalWrite(led,LOW);
    delay(unit);
}

void blinkA() {
    shortBlink();
    longBlink();
    
    delay(unit*2);
}

void blinkT() {
    longBlink();
    
    delay(unit*2);
}

void blinkE() {
    shortBlink();
    
    delay(unit*2);
}



void setup() {

pinMode(led, OUTPUT); 

}




void loop() {
    
    blinkT();
    blinkA();
    blinkT();
    blinkE();
    
    delay(unit*4);

}