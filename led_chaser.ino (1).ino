void setup()
{for(int i=8;i<=13;i++)
 { pinMode(i,OUTPUT);
}}

void loop() 
{for(int i=0;i<=1000;i++)
{
digitalWrite(8, HIGH);
delay(1000);
digitalWrite(8, LOW);
}for(int i=0;i<=2000;i++)
{
digitalWrite(9, HIGH);
delay(1000);
digitalWrite(9, LOW);}
for(int i=0;i<=3000;i++)
{digitalWrite(10, HIGH);
delay(1000);
digitalWrite(10, LOW);
}
for(int i=0;i<=4000;i++)
{
digitalWrite(11, HIGH);
delay(1000);
digitalWrite(11, LOW);
}
for(int i=0;i<=5000;i++)
{digitalWrite(12, HIGH);
delay(1000);
digitalWrite(12, LOW);
}
for(int i=0;i<=6000;i++)
{
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
}}
