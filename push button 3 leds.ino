int red=8;
int yellow=9;
int green=10;
int button=7;
int count=0;

void setup(){

  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(button,INPUT);

}

void loop(){
  if(digitalRead(button)==1){
  count++;
    if (count==1){
      digitalWrite(red,HIGH);
      delay(500);
    }

    else if(count==2){
      digitalWrite(yellow,HIGH);
      delay(500);
    }

    else if(count==3){
      digitalWrite(green,HIGH);
      delay(500);
    }

    else if(count==4){
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      count=0;
      delay(500);
}
}
}