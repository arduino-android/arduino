int led = 52;
int incomingByte = 0;

void setup() {                
  pinMode(led, OUTPUT);   
  Serial.begin(9600);  
}

void loop() {

  if (Serial.available() > 0) {
      incomingByte = 0;
      incomingByte = Serial.read();

      if(incomingByte == 48){ // 48 means 1
        digitalWrite(led, HIGH );
      }else { // else write low
       digitalWrite(led, LOW); 
      }
  }
}

