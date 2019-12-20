int value=0;            
float mv=0; 
float c=0;
void setup()
{ Serial.begin(9600);}

void loop()
{ value=analogRead(A0);    
  mv=(value/1024.0)*5000.0;
  c=mv/10.0;    
  Serial.print("temperature_in_degree_centrigrade= "); 
  Serial.println(c);
  delay(2000);
}
