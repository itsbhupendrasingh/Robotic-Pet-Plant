/*
 * Smart Pet plant Pot is copyright and patent reserved to HillyTech Starter Pvt Ltd company.
 * For any query, write to schematicslab@gmail.com
 */

int m11=9, m12=10, m21=11, m22=12;
int east, west, meast, mwest,m1east, m1west, cntrf=0, x=0, y=0;
void setup() {
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
  digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
  delay(1000);
}

void loop() {
  east=analogRead(A0);
  west=analogRead(A1);
  meast=map(east,0, 1023, 0, 100);
  mwest=map(west,0, 1023, 0, 100);
  delay(1000);
  if(meast<=60 && mwest<=60)
  {
    digitalWrite(m11, LOW);
    digitalWrite(m12, LOW);
    digitalWrite(m21, LOW);
    digitalWrite(m22, LOW);
    delay(1000);
  }
  else
  {
       if(meast> mwest)
        {
          delay(50);
          x++;
          if(x==1)
          {
            digitalWrite(m11, HIGH);
            digitalWrite(m12, LOW);
            digitalWrite(m21, HIGH);
            digitalWrite(m22, LOW);            
            delay(1000);
            digitalWrite(m11, LOW);
            digitalWrite(m12, LOW);
            digitalWrite(m21, LOW);
            digitalWrite(m22, LOW);
            delay(1000);
          }
          if(x>=2)
          { 
            digitalWrite(m11, LOW);
            digitalWrite(m12, LOW);
            digitalWrite(m21, LOW);
            digitalWrite(m22, LOW);
            delay(1000);
            x=2;
            y=0;
          }
       
          
        }
        if(meast< mwest)
        { 
          delay(50);
          y++;
          if(y==1)
          {
            digitalWrite(m11, LOW);
            digitalWrite(m12, HIGH);
            digitalWrite(m21, LOW);
            digitalWrite(m22, HIGH);
            delay(1000);
            digitalWrite(m11, LOW);
            digitalWrite(m12, LOW);
            digitalWrite(m21, LOW);
            digitalWrite(m22, LOW);
          }
          if(y>=2)
          {
            digitalWrite(m11, LOW);
            digitalWrite(m12, LOW);
            digitalWrite(m21, LOW);
            digitalWrite(m22, LOW);
            y=2;
            x=0;
          }
        } 
    } 
}
