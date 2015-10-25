// Binary Data Echo Test

const char HEADER = 0xFF;

void setup()
{
  Serial.begin(9600);
}


void loop(){
  if ( Serial.available() >= 1)
  {
    char ch;
    ch = Serial.read()
    Serial.write(ch);
  }
}
