#include <ClickEncoder.h>

#include <U8glib.h>

#include <TimerOne.h>

#include <Wire.h>

#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7,13);

int menuitem = 1;
int frame = 1;
int page = 1;
int lastMenuItem = 1;

String menuItem1 = "Volumen";
String menuItem2 = "Contraste";
String menuItem3 = "Lenguaje";
String menuItem4 = "Juegos";
String menuItem5 = "Reiniciar";

boolean backlight = true;
int volume = 50;
int contrast = 60;

String language[3] = { "EN", "ES", "EL" };
int selectedLanguage = 0;

boolean up = false;
boolean down = false;
boolean middle = false;

ClickEncoder *encoder;
int16_t last, value;

void setup() {

pinMode(7,OUTPUT);
turnBacklightOn();

encoder = new ClickEncoder(A1, A0, A2);
encoder->setAccelerationEnabled(false);

last = encoder->getValue();

display.begin();
display.clearDisplay();
setContrast();
};

void loop () {
};
