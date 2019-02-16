void setup()
{
  Serial.begin(9600);
}
void loop() {
  int mare = analogRead(0);
  int arat = analogRead(1);
  int mijl = analogRead(2);
  int inel = analogRead(3);
  int mic = analogRead(4);

  int marep = map(mare,160,250,10,170);
  int aratp = map(arat,115,260,10,170);
  int mijlp = map(mijl,115,270,10,170);
  int inelp = map(inel,150,280,10,170);
  int micp = map(mic,150,290,10,170);

  int maret=map(mare,160,250,0,49);
  int aratt=map(arat,115,260,50,99);
  int mijlt=map(mijl,115,270,100,149);
  int inelt=map(inel,150,280,150,199);
  int mict=map(mic,150,290,199,249);

  if (maret>0)
    Serial.write(maret);
  
  Serial.write(aratt);
  
  Serial.write(mijlt);
  
  Serial.write(inelt);
  
  Serial.write(mict);


  delay (10);
  
}
