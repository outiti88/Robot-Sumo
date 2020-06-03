
#include <Servo.h>

#define trigPin_gauche 8
#define echoPin_gauche 10

#define trigPin_droit 11
#define echoPin_droit 12

#define trigPin_centre 6
#define echoPin_centre 9

Servo gauche;
Servo droit;

int infra1= 2 ;
int infra2 = 6  ; //TX
//int infra3 = 7  ;
int infra4 = 4 ;

void setup() {
 Serial.begin (9600);

motor_connect(); //motor to pin

infra_connect(); //infrarouge to pin

conn_sonor(trigPin_droit,echoPin_droit); //sonor droit to pin
conn_sonor(trigPin_gauche,echoPin_gauche); //sonor gauche to pin
conn_sonor(trigPin_centre,echoPin_centre); //sonor centre to pin

}

void loop() {

//Serial.println(distance(trigPin_droit,echoPin_droit));
  Serial.println(digitalRead(infra2));


 if (digitalRead(infra1)==1) {
    arriere();
    delay(1500);
    liser();
    delay(1500);
  }


  else if(digitalRead(infra2)==1){
    arriere();
    delay(1500);
    limen();
    delay(1500);
    }


  else if(digitalRead(infra4)==1){
    avant();
    delay(1500);
    limen();
    delay(1500);
    }
    
else sonor();
   

}
