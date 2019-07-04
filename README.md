
## Class 1: Programming a fixed timer
### 0. Download [Arduino IDE](https://www.arduino.cc/en/Main/Software), set the right programmer/board/processor/port
- Click the link above and download the file, extract the zip file, launch the IDE
- Under tools in the IDE:
- Set the board as "Arduino Nano"
- Set the processor as "ATmega328P (Old Bootloader)"
- Set the programmer as "AVRISP mkll"
- Set the port to whatever shows up
### 1. Attach serial monitor
- Go to Tools->Serial Monitor->9600 baud
- New code lines:
	- `Serial.begin(9600);`
	- `Serial.println("hi");`
- (Upload and watch serial monitor)
### 2. Uncomment, attach variables, print variables
- To uncomment a line of code, add 2 slashes at the beginning
- You can print variables instead of strings in Serial print
- New code lines:
	- `int counter = 0;`
	- `Serial.println(counter);`
- (Upload and watch serial monitor)
### 3. Attach delay
- New code lines:
	- `delay(500);`
- (Upload and watch serial monitor)
### 4. Increment variables
- New code lines:
	- `counter = counter + 1;`
- (Upload and watch serial monitor)
### 5. Use if statement for finishing timer
- New code lines:
	- `if (counter>5) {Serial.println("timer is done!");}`
- (Upload and watch serial monitor)
### 6. Attach builtin output LED
- New code lines:
	- `pinMode(13, OUTPUT);`
	- `digitalWrite(13, HIGH);`
- (Upload and watch LED)
### 7. Attach other LEDs and Grounds
- New code lines:
	- `pinMode(5, OUTPUT); //LED 1`
	- `pinMode(8, OUTPUT); //LED 2`
	- `pinMode(11, OUTPUT); //LED 3`
	- `pinMode(4, OUTPUT); //Ground for LED 1`
	- `pinMode(7, OUTPUT); //Ground for LED 2`
	- `pinMode(10, OUTPUT); //Ground for LED 3`
	- `digitalWrite(4, LOW); //Ground for LED 1 gets set low`
	- `digitalWrite(7, LOW); //Ground for LED 2 gets set low`
	- `digitalWrite(10, LOW); //Ground for LED 3 gets set low`
### 8. Turn LEDs on after delay
- New code lines:
	- `digitalWrite(5, HIGH); //LED 1`
	- `digitalWrite(8, HIGH); //LED 2`
	- `digitalWrite(11, HIGH);  //LED 3`
- (Upload and watch LED)
### 9. Attach button and enable pullup resistor
- New code lines:
	- `pinMode(3, INPUT_PULLUP);`
### 10. Make if statement for button and counter
- New code lines:
	- `if(digitalRead(3)==LOW) {counter = 0;}`
- (Upload and watch LED and Serial monitor, try pressing button after it lights up)
### 11. Debug LEDs not turning off issue (no else statement)
- LEDs turn on after 5 counts, but don't turn off even though counter resets
- New code lines:
	- `else{digitalWrite(5, LOW); //LED 1`
	- `digitalWrite(8, LOW); //LED 2`
	- `digitalWrite(11, LOW);  //LED 3}`
	- (Upload and watch LED and Serial monitor, try pressing button after it lights up)
### 12. Change time for your needs
- Modified code line:
	- `if(counter > 10)`
- (Upload and watch LED and Serial monitor, try pressing button after it lights up)
## Problems:
- Is inconsistent in resetting the timer
- Only resets after the delay has finished
- To be fixed using the millis() function in a future Arduino class
