#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("notepad.exe");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("Merhaba Dunya!");
  DigiKeyboard.delay(10000);
}
