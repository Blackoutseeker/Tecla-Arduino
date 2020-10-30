#include <Keyboard.h>

// exemplo: quero a tecla "F5", será KEY_F5
// para ter acesso a todas as teclas especias visite: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
// altere a tecla abaixo conforme a necessidade, basta alterar a parte do "F"

char tecla = KEY_F8;

void setup() {
  pinMode(7, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if(digitalRead(7) == LOW) {
    Keyboard.press(tecla);
    delay(700);
    Keyboard.release(tecla);
  }
}
