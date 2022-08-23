
unsigned long sound = A0; // Sound coming from sensor
int relay = 4;
boolean light_on = false;

int counter = 0;
int threshold = 500; // Sound threshold
int status = HIGH;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sound, INPUT);
  pinMode(relay, OUTPUT);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:

  int sound_signal = analogRead(sound);
  Serial.print(sound_signal);

//  Serial.print(counter + " ");


  // Alternate Light
  if(sound_signal >= threshold) {
//    Serial.print(sound_signal);
    light_on = !light_on;
    status = !status;
    digitalWrite(relay, status);
    delay(400);
  }


  if(light_on == false) {
    Serial.println(" Light ON");
  }
  else if( light_on == true) { 
    Serial.println(" Light OFF");
  }


  counter++;

}
