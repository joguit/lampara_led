//#include <FastLED.h>
#include "config.h"
CRGB leds[NUM_LEDS];
//String mi_color;
int colorea_leds(long n, int t )
    {
     for (int i = 0; i <= NUM_LEDS; i++)
     {
     // leds[i]=CRGB::Black;
      leds[i]=n;
      }
   
    FastLED.show();
    delay(t);
    }


long lee_color_de_puerto_serie()
 {if (Serial.available())
   { long numero=0x0;
     String mi_color = Serial.readStringUntil('\n');
     DEBUG(mi_color);
     numero = strtol( &mi_color[0], NULL, 16);
     Serial.println(numero);
     Serial.println(numero,HEX);
     return numero;
    }
 }

void comprueba_boton_noche(int estado)
  {
   
    buttonState=digitalRead(buttonPin);
   if(buttonState == HIGH )
   { 
     colorea_leds(CRGB::Red , 1000);
     int i=0;
     buttonState=digitalRead(buttonPin);
     while ( i < 179 ) //bucle para temporizar 3 minutos
       {
         delay(1000);
         i=i+1;
         buttonState=digitalRead(buttonPin);
         if ( buttonState == HIGH ) //si pulsamos para apagar, terminamos bucle
             {i=180;}
       }
   }
  }    
