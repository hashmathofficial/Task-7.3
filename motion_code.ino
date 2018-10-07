int buzzer = 8;
int LED = 7;
int motion_sensor = 4;
int motion_detected;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(motion_sensor, INPUT);
}

void loop()
{
  motion_detected = digitalRead(motion_sensor);
  if (motion_detected == 1)
  {
    Serial.println("Motion detected...! take action immediately.");
    digitalWrite(buzzer, HIGH);
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
}
