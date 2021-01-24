int redled = 2;
int greenled = 3;
int blueled = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled,OUTPUT);
  randomSeed(analogRead(0));

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redled, random(255));
  delay(50);
  analogWrite(greenled, random(255));
  delay(50);
  analogWrite(blueled, random(255));
  delay(50);

}
