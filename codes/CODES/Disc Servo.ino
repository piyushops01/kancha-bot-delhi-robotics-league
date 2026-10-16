
  
  #include <Servo.h>  
   Servo guri;
   float i = 0; 
  int servo = 11;
  int pb1 = 7;
  int pb2 = 12;

void setup()
 {
  Serial.begin(9600);       
  pinMode(pb1, INPUT);  
  pinMode(pb2, INPUT);
  guri.attach(servo);     
  guri.write(0);
}

void loop()
{
    int pb1_data = digitalRead(pb1);
    int pb2_data = digitalRead(pb2);

    //Serial.println(pb1_data);
    //Serial.println(pb2_data);

    if(pb1_data == 1 && pb2_data == 1){
      //Serial.println("gg");
      return;
    }

    if(pb1_data == 1 && i <= 180){
      guri.write(i);
      i = i + 0.3;
      Serial.println(i);
    }
    if(pb2_data == 1 && i >= 0){
      guri.write(i);
      i = i - 0.3;
      Serial.println(i);
    }
    

} 