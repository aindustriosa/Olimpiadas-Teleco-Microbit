#include <Adafruit_Microbit.h>
Adafruit_Microbit_Matrix microbit;

const uint8_t
  smile_bmp[] =
  { B00000,
    B01010,
    B00000,
    B10001,
    B01110, };
    
void setup() {
  Serial.begin(9600);
  Serial.println("microbit matrix demo is ready!");
  microbit.begin();
}

void loop() {
  microbit.show(microbit.HEART);
  delay(1000);

  microbit.show(smile_bmp);
  delay(1000);

}
