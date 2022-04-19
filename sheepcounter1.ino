int pirpurp=6;
int pirblu=5;
int count=0;
int countEN,countEX;
void setup()
{
  pinMode(pirpurp, INPUT);
  pinMode(pirblu, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(pirpurp)==1){
    delay(1000);
    countEN=0;
    if(digitalRead(pirblu)==1){
      count++;
      countEN++;
      Serial.print("entered: ");
      Serial.println(countEN);
      Serial.print("number of sheeps: ");
      Serial.println(count); 
    }
  }
  else if(digitalRead(pirblu)==1){
    delay(1000);
    countEX=0;
    if (digitalRead(pirpurp)==1){
      count--;
      countEX++;
      Serial.print("exited: ");
      Serial.println(countEX);
      Serial.print("number of sheeps: ");
      Serial.println(count);
    }
  }
}