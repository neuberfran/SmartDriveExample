#include <SmartDrive.h>
#include <LiquidCrystal.h>

SmartDrive smd = SmartDrive(SmartDrive_DefaultAddress);

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{

  //Print on serial monitor
  Serial.print(smd.IsMotorPowered(SmartDrive_Motor_ID_1));

  //Print on lcd
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print(smd.IsMotorPowered(SmartDrive_Motor_ID_1));

  delay(1000);
}
