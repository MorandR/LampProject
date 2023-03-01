
unsigned long sound = A0;
int relay = 2;


unsigned long clap1 = 0;
unsigned long clap2 = 0;
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
    for(int i= 1000; i > 0; i--){
      if(analogRead(sound) > 500){
        clap2 = millis();

        Serial.print("Clap 1: ");
        Serial.println(clap1);
        Serial.print("Clap 2: ");
        Serial.println(clap2);

        if(clap2-clap1 > 240 && clap2-clap1 < 310){
          Serial.println("Lights Switched");
          light_on = !light_on;
          status = !status;
          digitalWrite(relay, status);
          delay(3000);
        }
      break;
      }
    } 
  }
}
