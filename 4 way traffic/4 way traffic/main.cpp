/*
 * 4 way traffic.cpp
 *
 * Created: 18/03/2023 01:10:am
 * Author : Davie
 */ 

#include <avr/io.h>
#include <util/delay.h>
  void count1()
  {
	 // PORTB=0b11110111;
	  //_delay_ms(1500);
	  PORTB=0b11111111;
	  _delay_ms(1500);
	  PORTB=0b11100101;
	  _delay_ms(1000);
	  PORTB=0b10111111;
	  _delay_ms(1000);
	  PORTB=0b10110111;
	  _delay_ms(1000);
	  PORTB=0b01100111;
	  _delay_ms(1000);
	  PORTB=0b011110011;
	  _delay_ms(1000);
	  PORTB=0b11011011;
	  _delay_ms(1000);
	  PORTB=0b01100001;
	  _delay_ms(1000);
	  PORTB=0b11111101;
	  _delay_ms(1500);  
  }
  void count2()
  {
	  //PORTB=0b11110111;
	  //_delay_ms(1500);
	 // PORTB=0b11111111;
	  //_delay_ms(1000);
	 // PORTB=0b11100101;
	 // _delay_ms(1000);
	  PORTB=0b10111111;
	   _delay_ms(1500);
	  PORTB=0b10110111;
	  _delay_ms(1000);
	  PORTB=0b01100111;
	  _delay_ms(1000);
	  PORTB=0b011110011;
	  _delay_ms(1000);
	  PORTB=0b11011011;
	  _delay_ms(1000);
	  PORTB=0b01100001;
	  _delay_ms(1000);
	  PORTB=0b11111101;
	  _delay_ms(1500);
  }


int main(void)
{
	DDRC=0b00111111;
	DDRD=0b00111111;
	DDRA=0b00000000;
    DDRB=0b11111111;
    while (1) 
    {
		//PORTC=0b00001001;
		//PORTD=0b00010100;
		//_delay_ms(5000);
		
		//PORTC=0b00010010;
		//PORTD=0b00100001;
		//_delay_ms(2000);
		
		//PORTC=0b00100100;
		//PORTD=0b00001010;
	    //_delay_ms(2000);
		
	   PORTC=0b00001100;
	   PORTD=0b00001001;
	   count1(); 
	   //allow for lane one 
	   
	   PORTC=0b00001010;
	   PORTD=0b00010001;
	   count2();
	   
	   PORTC=0b00001001;
	   PORTD=0b00100001;
	   count1();
	   //allow for lane three
	   
	   PORTC=0b00010001;
	   PORTD=0b00010001;
	   count2(); 
	   
	    PORTC=0b00100001;
		PORTD=0b00001001;
		count1();
		//allow for lane four
		
		PORTC=0b00010001;
		PORTD=0b00001010;
		count2();

		PORTC=0b00001001;
		PORTD=0b00001100;
		count1();
		//allow for lane two
		PORTC=0b00001010;
		PORTD=0b00001010;
		count2();
    }
	return 0;
}

