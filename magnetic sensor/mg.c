#include<avr/io.h>
#include<compat/deprecated.h>
#include<avr/interrupt.h>
#include<util/delay.h>

void main()
{
	cbi(DDRA,0);
	sbi(DDRC,3);
	sbi(PORTC,3);
	_delay_ms(500);
	cbi(PORTC,3);
	while(1)
	{	if(bit_is_set(PINA,0))
		{	sbi(PORTC,0);
			_delay_ms(500);
		}
		else
			cbi(PORTC,3);
	}	
}