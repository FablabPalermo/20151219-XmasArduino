// Notes definition
#define DO  523 
#define RE  587 
#define MI  659 
#define FA  698 
#define SOL 784 
#define LA  880 
#define SI  988

// PINs definitions
#define SPKR_PIN 2
#define L1_PIN   3
#define L2_PIN   4
#define L3_PIN   5
#define L4_PIN   6
#define L5_PIN   7
#define L6_PIN   8
#define R_PIN    9
#define G_PIN   10
#define B_PIN   11
#define IR_PIN  12

void setup() {
  // Hello
  Serial.begin(9600);
  Serial.println("Merry Christmas");    
  // Pins setup
  pinMode(L1_PIN,OUTPUT);
  pinMode(L2_PIN,OUTPUT);
  pinMode(L3_PIN,OUTPUT);
  pinMode(L4_PIN,OUTPUT);
  pinMode(L5_PIN,OUTPUT);
  pinMode(L6_PIN,OUTPUT);  
  pinMode(R_PIN,OUTPUT);
  pinMode(G_PIN,OUTPUT);
  pinMode(B_PIN,OUTPUT); 
  pinMode(SPKR_PIN, OUTPUT);
  pinMode(IR_PIN, INPUT);
  // Initial state
  digitalWrite(L1_PIN,HIGH);
  digitalWrite(L2_PIN,HIGH);
  digitalWrite(L3_PIN,HIGH);
  digitalWrite(L4_PIN,HIGH);
  digitalWrite(L5_PIN,HIGH);
  digitalWrite(L6_PIN,HIGH);  
  analogWrite(R_PIN,50);
  analogWrite(G_PIN,50);
  analogWrite(B_PIN,50);   
}

void loop() {
  // proximity check
  if(digitalRead(12)==1) return;

  // Jingle Bells
  
  tone(SPKR_PIN,MI,250);
  delay(500);
  analogWrite(R_PIN,0);
  
  tone(SPKR_PIN,MI,250);
  delay(500);
  analogWrite(G_PIN,0);
  
  tone(SPKR_PIN,MI,500);
  delay(1000); 
  analogWrite(B_PIN,0);
  
  // ---------  
  
  digitalWrite(L1_PIN,LOW);   
  tone(SPKR_PIN,MI,250);
  delay(500);
  
  digitalWrite(L2_PIN,LOW);     
  tone(SPKR_PIN,MI,250);
  delay(500);
  
  digitalWrite(L3_PIN,LOW);       
  tone(SPKR_PIN,MI,500);
  delay(1000);
       
  // ---------  
  
  digitalWrite(L4_PIN,LOW);       
  tone(SPKR_PIN,MI,250);
  delay(500);

  digitalWrite(L5_PIN,LOW); 
  tone(SPKR_PIN,SOL,250);
  delay(500);

  digitalWrite(L6_PIN,LOW);       
  tone(SPKR_PIN,DO,250);
  delay(500);

  // RGB LED
  analogWrite(R_PIN,100);
  analogWrite(G_PIN,120);
  analogWrite(B_PIN, 80);
  tone(SPKR_PIN,RE,250);
  delay(500);
  analogWrite(R_PIN,0);
  analogWrite(G_PIN,0);
  analogWrite(B_PIN,0);

  // Other LEDs
  digitalWrite(L1_PIN,HIGH);
  digitalWrite(L2_PIN,HIGH);
  digitalWrite(L3_PIN,HIGH);
  digitalWrite(L4_PIN,HIGH);
  digitalWrite(L5_PIN,HIGH);
  digitalWrite(L6_PIN,HIGH);  
  tone(SPKR_PIN,MI,1000);
  delay(1500);  
  analogWrite(R_PIN,50);
  analogWrite(G_PIN,50);
  analogWrite(B_PIN,50);
  
}
















