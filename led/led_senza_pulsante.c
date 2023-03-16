// Classe LED
class LED {
  private:
    int pin; // Pin del LED
  	int stato; //stato del led 
     
  public:
    // Costruttore: imposta la modalità del pin del LED come output
    LED(int p) 
    {
      pin = p;
      pinMode(pin, OUTPUT);
      stato=0;
      
    }

    // Metodo per accendere il LED
    void accendi() 
    {
      digitalWrite(pin, HIGH);
      stato=1;
    }

    // Metodo per spegnere il LED
    void spegni() 
    {
      digitalWrite(pin, LOW);
      stato=0;
    }
  
  	void inverti()
    {
      if(stato==1)
      {spegni();}
      else
      {accendi();}
    }
    void lampeggio(int nr) 
    {
      //esegue nr lampeggi
      
      int i;
      
      for(i=0;i<nr;i++)
      {
       
        accendi();
        delay(1000);
        spegni();
        delay(1000);
      }
      
      
      
    }
    void test(int nr) 
    {
      //se nr==0 fa tre lampeggio
      if(nr==0)
      {
        	 
      int i;
      int pippo=3;
      
      for(i=0;i<pippo;i++)
      {
       
        accendi();
        delay(1000);
        spegni();
        delay(1000);
      }
      
      }
      
    }
  
  
};

// Crea un oggetto LED sulla porta 13
LED led(11);

void setup() 
{
	//led.lampeggio(5);
  	led.test(0);
 
}

void loop() {
  delay(3000);
  //led.inverti();
    

 
}
  
