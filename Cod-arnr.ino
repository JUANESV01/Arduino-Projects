#include <Servo.h>

Servo pata11; Servo pata12;
Servo pata21; Servo pata22;
Servo pata31; Servo pata32;
Servo pata41; Servo pata42;

int time_s = 200;
int i = 0;

void setup()
{
  pata11.attach(4); pata12.attach(5);
  pata21.attach(6); pata22.attach(7);
  pata31.attach(8); pata32.attach(9);
  pata41.attach(10); pata42.attach(11);

  abajo();
  delay(2000);
  arriba();
  delay(2000);
}

void loop()
{
  for (i = 0; i < 12; i++)
  {
    adelante();
  }
  
  for (i = 0; i < 8; i++)
  {
    giro_izquierda();
  }
  
  for (i = 0; i < 12; i++)
  {
    adelante();
  }
  
  for (i = 0; i < 8; i++)
  {
    giro_derecha();
  }
  
  for (i = 0; i < 12; i++)
  {
    adelante();
  }
  
  for (i = 0; i < 6; i++)
  {
    atras();
  }

}


void abajo()
{
  pata11.write(60); pata12.write(90);
  pata21.write(120); pata22.write(90);
  pata31.write(120); pata32.write(90);
  pata41.write(60); pata42.write(90);
}

void arriba()
{
  pata11.write(60); pata12.write(130);
  pata21.write(120); pata22.write(126);
  pata31.write(120); pata32.write(126);
  pata41.write(60); pata42.write(130);
}

void adelante()
{
  pata42.write(90);
  delay(time_s);
  pata41.write(20);
  delay(time_s);
  pata42.write(130);
  delay(time_s);

  pata22.write(90);
  delay(time_s);
  pata21.write(90);
  delay(time_s);
  pata22.write(126);
  delay(time_s);

  pata32.write(90);
  delay(time_s);
  pata31.write(160);
  delay(time_s);
  pata32.write(126);
  delay(time_s);

  pata12.write(90);
  delay(time_s);
  pata11.write(100);
  delay(time_s);
  pata12.write(126);
  delay(time_s);

  pata11.write(60);
  pata21.write(120);
  pata31.write(120);
  pata41.write(60);
  delay(time_s);
}

void atras()
{
  pata42.write(90);
  delay(time_s);
  pata41.write(120);
  delay(time_s);
  pata42.write(130);
  delay(time_s);

  pata22.write(90);
  delay(time_s);
  pata21.write(150);
  delay(time_s);
  pata22.write(126);
  delay(time_s);

  pata32.write(90);
  delay(time_s);
  pata31.write(70);
  delay(time_s);
  pata32.write(126);
  delay(time_s);

  pata12.write(90);
  delay(time_s);
  pata11.write(30);
  delay(time_s);
  pata12.write(126);
  delay(time_s);

  pata11.write(60);
  pata21.write(120);
  pata31.write(120);
  pata41.write(60);
  delay(time_s);
}

void giro_izquierda()
{
  pata42.write(90);
  delay(time_s);
  pata41.write(20);
  delay(time_s);
  pata42.write(130);
  delay(time_s);

  pata22.write(90);
  delay(time_s);
  pata21.write(90);
  delay(time_s);
  pata22.write(126);
  delay(time_s);

  pata32.write(90);
  delay(time_s);
  pata31.write(70);
  delay(time_s);
  pata32.write(126);
  delay(time_s);

  pata12.write(90);
  delay(time_s);
  pata11.write(20);
  delay(time_s);
  pata12.write(126);
  delay(time_s);

  pata11.write(60);
  pata21.write(120);
  pata31.write(120);
  pata41.write(60);
  delay(time_s);

}

void giro_derecha()
{
  pata42.write(90);
  delay(time_s);
  pata41.write(120);
  delay(time_s);
  pata42.write(130);
  delay(time_s);

  pata22.write(90);
  delay(time_s);
  pata21.write(150);
  delay(time_s);
  pata22.write(126);
  delay(time_s);

  pata32.write(90);
  delay(time_s);
  pata31.write(160);
  delay(time_s);
  pata32.write(126);
  delay(time_s);

  pata12.write(90);
  delay(time_s);
  pata11.write(100);
  delay(time_s);
  pata12.write(126);
  delay(time_s);

  pata11.write(60);
  pata21.write(120);
  pata31.write(120);
  pata41.write(60);
  delay(time_s);
}
