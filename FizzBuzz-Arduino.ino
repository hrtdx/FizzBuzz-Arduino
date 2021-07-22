void setup() {
  Serial.begin(9600);
  Serial.println("Fizz Buzz on Arduino.");
  
  int count = 100;
  for(int i=1; i<=count; i++){
    if(i%3==0 && i%5==0){
      Serial.println("Fizz Buzz");
    }
    else if(i%3==0){
      Serial.println("Fizz");
    }
    else if(i%5==0){
      Serial.println("Buzz");
    }
    else{
      Serial.println(String(i));
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
