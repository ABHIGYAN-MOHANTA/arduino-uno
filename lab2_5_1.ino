// Date: 10/10/25
// Experiment 5.1
// Name: Abhigyan Mohanta
// Regd no. 2241013204
// Sec: 29

int led_brightness = 51;
bool increasing = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(8);
  if(a == 0){
     if(increasing == true){
      led_brightness = led_brightness + 51;
      }
      else{
        led_brightness = led_brightness - 51;
      }
  }
  
  if(led_brightness >= 255){
     led_brightness = 255;
    increasing = false;

  }
  else if(led_brightness <= 51){
    led_brightness = 51;
    increasing = true;
  }
   

  analogWrite(9, led_brightness);
  Serial.println(led_brightness);

  delay(500);

  

}
