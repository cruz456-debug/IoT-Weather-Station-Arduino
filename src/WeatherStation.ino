#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
  lcd.print("Initialisation...");
  delay(2000);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    lcd.setCursor(0, 0);
    lcd.print("Erreur Capteur");
    return;
  }

  // Affichage LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");
  
  lcd.setCursor(0, 1);
  lcd.print("Humid: ");
  lcd.print(h);
  lcd.print(" %");

  // Envoi vers le port série (pour monitoring PC)
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print("°C | Humidite: ");
  Serial.print(h);
  Serial.println("%");

  delay(5000); // Mise à jour toutes les 5 secondes
}
