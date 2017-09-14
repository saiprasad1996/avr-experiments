#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>
int main(){
    
    DDRB = 0xff;
    PORTB = 0xff;
    while(1){
        PORTB = 0x00;
        _delay_ms(1000);
        PORTB = 0Xff;
        _delay_ms(1000);
    }
}