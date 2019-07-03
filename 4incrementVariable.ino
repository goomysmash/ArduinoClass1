int counter = 0; //declaring the counter variable and setting it to 0

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600); //set the Baud rate to 9600hz. You can change this in the bottom right corner of the serial monitor
}

void loop() 
{
  // put your main code here, to run repeatedly:
  //Serial.println("hi"); //Send the serial signal to the computer to print the string "hi" to the serial monitor
  Serial.println(counter); //print the value of the variable 'counter'
  delay(500); //delay 500 milliseconds
  counter = counter + 1; //take the previous value of 'counter', add 1, and store that new number in 'counter' again
}
