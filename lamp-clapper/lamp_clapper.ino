
unsigned long sound = A0;
int relay = 2;


unsigned long clap1 = 0;
unsigned long clap2 = 0;
unsigned long db_diff = 0;
int db_range[2] = {300, 500};
boolean light_on = false;
unsigned long heard = 0;
int status = HIGH;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sound, INPUT);
  pinMode(relay, OUTPUT);
  Serial.println("Hello Richard");

}

void loop() {
  // put your main code here, to run repeatedly:
heard = analogRead(sound);

Serial.print("dB level: ");
Serial.println(heard);

if(heard > 500){
  clap1 = millis();
  delay(200);
  for(int i= 3000; i > 0; i--){
    if(analogRead(sound) > 500){
      clap2 = millis();

      db_diff = clap2 - clap1;
      
      Serial.print("Clap 1: ");
      Serial.println(clap1);
      Serial.print("Clap 2: ");
      Serial.println(clap2);
      Serial.print("Time Diff:");
      Serial.println(db_diff);
      
      if(db_diff > db_range[0] && db_diff < db_range[1]){
        Serial.println("Lights Switched");
        light_on = !light_on;
        status = !status;
        digitalWrite(relay, status);
         delay(2800);

      }
    break;
    }
  }
  
}






}
