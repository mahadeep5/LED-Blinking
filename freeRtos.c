#define<Arduino_FreeRTOS.h>
#define redLed 7
#define greenLed  8
void setup(){
    PinMode(greenLed, OUTPUT);
    xTaskCreate(redLedTask, "red Led Task,128,NULL,1,NULL");
    xTaskCreate(greenLedTask, "green Led Task,128,NULL,1,NULL");

}
void loop(){
    void redLedTask(void *pvParameter){
        PinMode(redLed, OUTPUT);
        while(1){
            digitalWrite(redLed, HIGH);
            delay(500);
            digitalWrite(redLed, LOW);
            delay(500);
        }
    }
     void greenLedTask(void *pvParameter){
        PinMode(greenLed, OUTPUT);
        while(1){
            digitalWrite(greenLed, HIGH);
            delay(500);
            digitalWrite(greenLed, LOW);
            delay(500);
        }
    }
}
