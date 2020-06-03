
void sonor(){

  if(distance(trigPin_gauche,echoPin_gauche)<30 && distance(trigPin_gauche,echoPin_gauche)>0){
    liser();
    }
      
else if(distance(trigPin_droit,echoPin_droit)<30 && distance(trigPin_droit,echoPin_droit)>0){
  limen();
  }
  else avant();
     delay(50);
  }
