/*
  ArduinoLogo

  created DD MMM YYYY
  by Leonardo Cavagnis
*/

#include "Arduino_H7_Video.h"

#include "img_arduinologo.h"
// Alternatively, any raw RGB565 image can be included on demand using this macro
// Online image converter: https://lvgl.io/tools/imageconverter (Output format: Binary RGB565)
/*
#define INCBIN_PREFIX
#include "incbin.h"
INCBIN(test, "/home/user/Downloads/test.bin");
*/

Arduino_H7_Video Display(800, 480, GIGA_DISPLAY_SHIELD);
//Arduino_H7_Video Display(720, 480);

Image img_arduinologo(ENCODING_RGB16, (uint8_t *) texture_raw, 300, 300);

void setup() {
  Display.begin();

  Display.beginDraw();
  Display.image(img_arduinologo, (Display.width() - img_arduinologo.width())/2, (Display.height() - img_arduinologo.height())/2);
  Display.endDraw();
}

void loop() { }