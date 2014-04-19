int led = 13;
int incomingByte = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:
void loop() {



        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: "+ incomingByte );
//                Serial.println(incomingByte, DEC);
                
                if(incomingByte == 49){
                  digitalWrite(led, LOW); 
                }else{
                 digitalWrite(led, HIGH); 

                }

        }
      
    }
