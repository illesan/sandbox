char ctrlKey = KEY_LEFT_CTRL;
char winKey = KEY_LEFT_GUI;

void setup() {
  Keyboard.begin();
  delay(1000);
  Keyboard.press(winKey);
  delay(100);
  Keyboard.releaseAll();
  Keyboard.print("gedit");
  Keyboard.end();
}

void loop() {
 //do nothing
}
//
