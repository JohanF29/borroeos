const int BLED=9;    // LED AZUL
const int GLED=10;   //LED VERDE
const int RLED=11;   //LED ROJO


void setup() {
  // put your setup code here, to run once:

  pinMode (BLED, OUTPUT); // Set Blue LED as Output
  pinMode (GLED, OUTPUT); // Set Green LED as Outout
  pinMode (RLED, OUTPUT); // Set Red LED as Output
 }



void loop() 
{

 for(int i=255; i>=0;i--)
 {

    analogWrite(RLED, 0);
    analogWrite(GLED, 255);
    analogWrite(BLED, 255);
    delay(1000);
  
  for(int j=255; j>=0;j--)
  {
    analogWrite(RLED, 255);
    analogWrite(GLED, 0);
    analogWrite(BLED, 255);
    delay(1000);
    
    for(int k=255; k>=0;k--)
    {
    analogWrite(RLED, i);
    analogWrite(GLED, j);
    analogWrite(BLED, k);
    delay(50);
    analogWrite(RLED, 255);
    analogWrite(GLED, 255);
    analogWrite(BLED, 255);
    delay(40);
    /*delay(5000);
     analogWrite(RLED, i);
    delay(5000);
    analogWrite(GLED, i);
    delay(5000);
    analogWrite(BLED, i);*/
    
    
    }
  }
 }


    analogWrite(RLED, 0);
    analogWrite(GLED, 255);
    analogWrite(BLED, 255);
    delay(1000);
}
