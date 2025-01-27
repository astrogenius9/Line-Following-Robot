#define en1 9
#define input1 6
#define input2 7
#define en2 11
#define input3 10
#define input4 8
#define L_sensor 4
#define R_sensor 3
void setup() {
pinMode(en1, OUTPUT);
pinMode(en2, OUTPUT);
pinMode(input1, OUTPUT);
pinMode(input2, OUTPUT);
pinMode(input3, OUTPUT);
pinMode(input4, OUTPUT);
pinMode(L_sensor, INPUT);
pinMode(R_sensor, INPUT);
// put your setup code here, to run once:
Serial.begin(9600);
analogWrite(en1,250);
analogWrite(en2, 250);
}
void loop() {
if((digitalRead(L_sensor) == HIGH) && (digitalRead(R_sensor) == HIGH)){
Serial.println(" Left and Right sensors are high");
digitalWrite(input1, HIGH);
digitalWrite(input2, LOW);
digitalWrite(input3, HIGH);
digitalWrite(input4, LOW);
}
else if((digitalRead(L_sensor) == HIGH) && (digitalRead(R_sensor) == LOW)){
Serial.println(digitalRead(L_sensor));
Serial.println(digitalRead(R_sensor));
digitalWrite(input1, LOW);
digitalWrite(input2, LOW);
digitalWrite(input3, HIGH);
digitalWrite(input4, LOW);
}
else if((digitalRead(L_sensor) == LOW) && (digitalRead(R_sensor) == HIGH)){
Serial.println(" Left Low");
Serial.println(Right HIGH);
digitalWrite(input1, HIGH);
digitalWrite(input2, LOW);
digitalWrite(input3, LOW);
digitalWrite(input4, LOW);
}
else {
digitalWrite(input1, LOW);
digitalWrite(input2, LOW);
digitalWrite(input3, LOW);
digitalWrite(input4, LOW);
}
}
