void setup() {
  Serial.begin(9600);
  Serial.println("Fizz Buzz on Arduino.");

  fizzbuzz(100);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void fizzbuzz(int i){
  int count = i;
  for(int a=1; a<=count; a++){
    if(a%3==0 && a%5==0){
      Serial.println("Fizz Buzz");
    }
    else if(a%3==0){
      Serial.println("Fizz");
    }
    else if(a%5==0){
      Serial.println("Buzz");
    }
    else{
      Serial.println(String(a));
    }
  }
}
