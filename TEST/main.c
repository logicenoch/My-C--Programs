/*Map the pins of the arduino to symbolic constants*/
#define G_1_G 0
#define G_1_Y 1
#define G_1_R 2

#define G_2_G 3
#define G_2_Y 4
#define G_2_R 5

#define S_1 6
#define S_2 7
#define S_3 8
#define S_4 9

/*Map the time value to symbolic constants*/
#define OneSec 1000
#define SixSecs 6000
#define ThreeSecs 3000

/*Function Definitions*/
void PhaseOne(void);
void PhaseTwo(void);
void PhaseThree(void);

void setup()
 { 
   /*The pin configurations*/
   pinMode(G_1_G, OUTPUT);
   pinMode(G_1_Y, OUTPUT);
   pinMode(G_1_R, OUTPUT);
   
   pinMode(G_2_G, OUTPUT);
   pinMode(G_2_Y, OUTPUT);
   pinMode(G_2_R, OUTPUT);
   
   pinMode(S_1, INPUT);
   pinMode(S_2, INPUT);
   pinMode(S_3, INPUT);
   pinMode(S_4, INPUT); 
   
   /*Turns output pins off*/
   Initialize();
 }

void loop()
 {

   PhaseOne();
   delay(SixSecs);
   init_Sensors_G1();
   PhaseTwo();
   delay(ThreeSecs);
   PhaseThree();
   delay(SixSecs);
   init_Sensors_G2();
 }
 
 /*Turns all the output pins OFF*/
 void Initialize(){
   unsigned int pin;
   for(pin = 0; pin < 7; pin++){
     digitalWrite(pin, LOW);
   }
 }

/*Controls the First Phase of Operation*/
 void PhaseOne(){
    digitalWrite(G_1_G, HIGH);
    digitalWrite(G_2_R, HIGH);
 }


/*Controls the Second Phase of Operation*/
  void PhaseTwo(){
    digitalWrite(G_1_G, LOW);
    digitalWrite(G_2_R, LOW);
    
    digitalWrite(G_1_Y, HIGH);
    digitalWrite(G_2_Y, HIGH);
 }
 
 /*Controls the Third Phase of Operation*/
   void PhaseThree(){
    digitalWrite(G_1_Y, LOW);
    digitalWrite(G_2_Y, LOW);
    
    digitalWrite(G_2_G, HIGH);
    digitalWrite(G_1_R, HIGH);
 }
/*Controls the operations of the group 1 queue sensors*/
 void init_Sensors_G1(){
    unsigned int Sensor_1, Sensor_2;
    Sensor = d
    if(digitalRead(S_1) == LOW || digitalRead(S_2) == LOW){
      delay(ThreeSecs);
    }
 }
 
/*Controls the operations of the group 2 queue sensors*/
  void init_Sensors_G2(){
    if(digitalRead(S_3) == LOW || digitalRead(S_4) == LOW){
      delay(ThreeSecs);
    }
 }
