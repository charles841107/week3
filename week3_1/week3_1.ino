#include<Wire.h>
#include"SSD1306Wire.h"
int freq=5000;
int val;
int x=36;
SSD1306Wire display(0x3c,21,22);
void setup() {
    // Initialising the UI will init the display too.
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  // put your setup code here, to run once:ledcSetup(ledChannel, freq, resolution);
 Serial.begin(9600);
  display.setTextAlignment(TEXT_ALIGN_RIGHT);
  display.drawString(64, 15, String(545447));
  // write the buffer to the display
  display.display();
}


void loop() {
  val = analogRead(x);     // read the input pin
  Serial.print("HAHAHAH");
  Serial.println(val);
  //delay(1000);
  // put your main code here, to run repeatedly:

 delay(10);
  // clear the display
  display.clear();
  // draw the current demo method
  

  display.setTextAlignment(TEXT_ALIGN_RIGHT);
  display.drawString(80, 25, String(val));
  // write the buffer to the display
  display.display();

 
  delay(10);
}
