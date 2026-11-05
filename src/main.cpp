#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  lcd.init();        // initialise l'écran
  lcd.backlight();   // allume le rétroéclairage

  lcd.setCursor(0, 0);        // colonne 0, ligne 0
  lcd.print("Bonjour !");

  lcd.setCursor(0, 1);        // colonne 0, ligne 1
  lcd.print("Projet ESTIA");
}

// the loop function runs over and over again forever
void loop() {

}