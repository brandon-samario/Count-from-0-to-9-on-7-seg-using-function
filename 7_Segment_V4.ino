/*
  Define the pins that will be used to connect the Arduino to the 7 segment display.
  Define the numbers to be displayed in binary.
  Function to display a number on the 7-segment display.
  Set the pins for the 7-segment display as outputs.
  Display numbers 0 to 9 on the 7-segment display, using HIGH parameters based on the binary values.
  The delay function is used to delay the display for 1 second.
*/

//Define the pins for the 7-segment display
const int segA = 2; //a is connected to pin 2 on Arduino
const int segB = 3; //b is connected to pin 3 on Arduino
const int segC = 4; //c is connected to pin 4 on Arduino
const int segD = 5; //d is connected to pin 5 on Arduino
const int segE = 6; //e is connected to pin 6 on Arduino
const int segF = 7; //f is connected to pin 7 on Arduino
const int segG = 8; //g is connected to pin 8 on Arduino

//Define the numbers to be displayed
const int num0[7] = {1, 1, 1, 1, 1, 1, 0};
const int num1[7] = {0, 1, 1, 0, 0, 0, 0};
const int num2[7] = {1, 1, 0, 1, 1, 0, 1};
const int num3[7] = {1, 1, 1, 1, 0, 0, 1};
const int num4[7] = {0, 1, 1, 0, 0, 1, 1};
const int num5[7] = {1, 0, 1, 1, 0, 1, 1};
const int num6[7] = {1, 0, 1, 1, 1, 1, 1};
const int num7[7] = {1, 1, 1, 0, 0, 0, 0};
const int num8[7] = {1, 1, 1, 1, 1, 1, 1};
const int num9[7] = {1, 1, 1, 1, 0, 1, 1};

//Function to display a number on the 7-segment display
void displayNumber(const int* number) {
  digitalWrite(segA, number[0]);
  digitalWrite(segB, number[1]);
  digitalWrite(segC, number[2]);
  digitalWrite(segD, number[3]);
  digitalWrite(segE, number[4]);
  digitalWrite(segF, number[5]);
  digitalWrite(segG, number[6]);
}

void setup() {
  //Set the pins for the 7-segment display as outputs
  pinMode(segA, OUTPUT); //Set segment a as output
  pinMode(segB, OUTPUT); //Set segment b as output
  pinMode(segC, OUTPUT); //Set segment c as output
  pinMode(segD, OUTPUT); //Set segment d as output
  pinMode(segE, OUTPUT); //Set segment e as output
  pinMode(segF, OUTPUT); //Set segment f as output
  pinMode(segG, OUTPUT); //Set segment g as output
}

void loop() {
  //Display numbers 0 to 9 on the 7-segment display
  displayNumber(num0); //display 0
  delay(1000); //delay for 1 second
  displayNumber(num1); //display 1
  delay(1000); //delay for 1 second
  displayNumber(num2); //display 2
  delay(1000); //delay for 1 second
  displayNumber(num3); //display 3
  delay(1000); //delay for 1 second
  displayNumber(num4); //display 4
  delay(1000); //delay for 1 second
  displayNumber(num5); //display 5
  delay(1000); //delay for 1 second
  displayNumber(num6); //display 6
  delay(1000); //delay for 1 second
  displayNumber(num7); //display 7 
  delay(1000); //delay for 1 second
  displayNumber(num8); //display 8
  delay(1000); //delay for 1 second
  displayNumber(num9); //display 9
  delay(1000); //delay for 1 second
}
