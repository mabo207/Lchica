#include <M5Stack.h>

static const int LED_PIN = 22;
static int counter = 0;

void setup() {
	// put your setup code here, to run once:
	M5.begin();
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	M5.update();
	delay(16);
	// ここから下に処理を書く
	counter++;
	if(counter%30==1){
		const int longCounter = counter / 30;
		if(longCounter%2==0){
			digitalWrite(LED_PIN, HIGH);
		}else{
			digitalWrite(LED_PIN, LOW);
		}
	}
}