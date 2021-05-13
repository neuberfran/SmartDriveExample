#include <SmartDrive.h>

SmartDrive smd = SmartDrive(SmartDrive_DefaultAddress);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Print on serial monitor
   Serial.print("Motor powered: " + smd.IsMotorPowered(SmartDrive_Motor_ID_1));


 smd.Run_Seconds(SmartDrive_Motor_ID_1, SmartDrive_Dir_Reverse, 90, 11, true, SmartDrive_Action_Brake);

// smd.Run_Unlimited(SmartDrive_Motor_ID_1, SmartDrive_Dir_Forward, 90);


  delay(5000);

  
}