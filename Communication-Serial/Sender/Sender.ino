//https://www.youtube.com/watch?v=YOUzdf5SpuU

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //baca nilai sensor
  int Sensor = analogRead(0);
  //tampilkan ke serial monitor
  Serial.println(Sensor);
  delay(500);
}
