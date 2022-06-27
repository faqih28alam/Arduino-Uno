//https://www.youtube.com/watch?v=YOUzdf5SpuU

void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  String Data = "";
  //selama data serial ada
  while(Serial.available()>0)
  {
    //ambil data serial kemuadian dimasukan ke variabel "Data"
    Data += char(Serial.read());
  }
  //menghilangkan spasi pada serial monitor
  Data.trim();
  
  //tampilkan data di serial monitor
  Serial.println("Data dari Sender: " + Data);
  delay(500);
}
