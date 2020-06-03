void motor_connect(){
   gauche.attach(5);
 droit.attach(3);
  }


void avant(){
   droit.writeMicroseconds(1060); 
   gauche.writeMicroseconds(1640);
  
  }

 void arriere(){
    droit.writeMicroseconds(1300); 
    gauche.writeMicroseconds(1400);
  
  }


void limen(){
   droit.writeMicroseconds(1180); 
   gauche.writeMicroseconds(1640);
  
  }

 void liser(){
   droit.writeMicroseconds(1060); 
   gauche.writeMicroseconds(1490);
   }

  void stoper(){
   droit.writeMicroseconds(1200); 
   gauche.writeMicroseconds(1490);  
   }
  // stop
