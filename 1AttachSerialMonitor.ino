void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600); //set the Baud rate to 9600hz. You can change this in the bottom right corner of the serial monitor
}

void loop() 
{
  // put your main code here, to run repeatedly:
  Serial.println("hi"); //Send the serial signal to the computer to print the string "hi" to the serial monitor
}
