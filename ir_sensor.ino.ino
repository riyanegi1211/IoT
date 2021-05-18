int value; // variable to store value read on digital pin 

void setup() 
{ 
Serial.begin(115200);
pinMode(2, INPUT); // initialize digital pin 2 as an input 

}

void loop() 
{ 
value = digitalRead(2); // read value on pin 2 
if(value==1) // if value is 1 
{ 
Serial.println("object not present");
} 
else // otherwise 
{ 
Serial.println("Object detected ");
} 
}
