
void setup() {
pinMode(12,INPUT);
pinMode(8,OUTPUT);
}

void loop() {
  if(digitalRead(12)==LOW){
    digitalWrite(8, HIGH); 
    delay(1000); 
    }            
 else{
    digitalWrite(8, LOW);   
    delay(1000);  
     }                   
}
