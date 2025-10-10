// Date: 10/10/25
// Experiment 5.2
// Name: Abhigyan Mohanta
// Regd no. 2241013204
// Sec: 29

int led_brightness = 51;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(8);
  int b = digitalRead(9);
  if(a == 0){
    led_brightness = led_brightness + 51;
  }
  if(b == 0){
    led_brightness = led_brightness - 51;
  }
  
  if(led_brightness >= 255){
     led_brightness = 255;
     tone(2, 1000, 500);

  }
  else if(led_brightness <= 51){
    led_brightness = 51;
    tone(2, 1000, 500);
  }
   

  analogWrite(3, led_brightness);
  Serial.println(led_brightness);

  delay(500);
}
