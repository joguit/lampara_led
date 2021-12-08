/*

                                  +—–+
    +—-[PWR]———---------———-| USB |–+
    |                             +—-+  |
    |             GND/RST2 [ ][ ]        |
    |           MOSI2/SCK2 [ ][ ] SCL[ ] | C5
    |             5V/MISO2 [ ][ ] SDA[ ] | C4
    |                            AREF[ ] |
    |                             GND[ ] |
    | [ ]N/C                   SCK/13[A] | B5
    | [ ]v.ref                MISO/12[A] | .
    | [ ]RST                  MOSI/11[A]~| .
    | [ ]3V3   +—+                10[ ]~| .
    | [ ]5v    | A |                9[ ]~| .
    | [ ]GND  -| R |-               8[B] | B0
    | [ ]GND  -| D |-                    |
    | [ ]Vin  -| U |-               7[A] | D7
    |         -| I |-               6[A]~| .
    | [ ]A0   -| N |-               5[C]~| .
    | [ ]A1   -| O |-               4[A] | .
    | [ ]A2    +—+            INT1/3[A]~| .
    | [ ]A3                    INT0/2[ ] | .
    | [ ]A4 RST SCK MISO         TX>1[ ] | .
    | [ ]A5 [ ] [ ] [ ]          RX<0[ ] | D0
    |       [ ] [ ] [ ]                  |  
    | UNO_R3 GND MOSI 5V     ____________/
    \_______________________/

http://busyducks.com/ascii-art-arduinos
*/


#include <FastLED.h>
#include <SoftwareSerial.h>
#include "Pinout_.h"
#include "funciones.hpp"
#include "config.h"
 // configura un nuevo objeto serie
SoftwareSerial mySerial (rxPin, txPin);
    
void setup() {

  pinMode(buttonPin,INPUT);
  // Uncomment/edit one of the following lines for your leds arrangement.
  // ## Clockless types ##
  //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
  // FastLED.addLeds<SM16703, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1829, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1812, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1904, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS2903, DATA_PIN, RGB>(leds, NUM_LEDS);
   FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);  // GRB ordering is typical
  
  
  // FastLED.addLeds<WS2852, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
  // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
  // FastLED.addLeds<GS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SK6812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
  // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<APA106, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<PL9823, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2813, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2811_400, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GE8822, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD1886, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD1886_8BIT, DATA_PIN, RGB>(leds, NUM_LEDS);
  // ## Clocked (SPI) types ##
  // FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
  // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
  // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
  // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
  // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
  // FastLED.addLeds<SK9822, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical

 Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
 Serial.println("<Arduino is ready>");
 mySerial.begin(9600);//bluetooth port

 
 colorea_leds(0xff ,1000);
 colorea_leds(0xff00,1000);
 colorea_leds(CRGB::Black , 1000);
 
}


void loop() {
   
   comprueba_boton_noche(buttonState);
   numero= lee_color_de_puerto_serie();
   colorea_leds(numero,500);
}
