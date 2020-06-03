

// pour connecter les sonors avec leurs pin
void conn_sonor(int trig, int echo){
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  }


// return la distance calculer par le sonors
long distance(int trig , int echo){

digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
long duration_droit =  pulseIn(echo, HIGH);
return  ((duration_droit/2) *0.034 ); 
  }

int obstacle(int g_trig , int g_echo , int d_trig , int d_echo , int c_trig , int c_echo){
  long gauche = distance(g_trig,g_echo);
  long droit = distance(d_trig,d_echo);
  long centre = distance(c_trig,c_echo);

  delay(50);
  if((gauche < 30) || (droit < 30) || (centre < 30) ) return 1;
  else return 0;
  
  }
