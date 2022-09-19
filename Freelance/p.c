#include <avr/io.h>


int main(){
int x[21],i , z ,y;
DDRA = 0xff;
DDRB = 0xff;

	while(1){

for(i=1;i<9;i++){
	if(x[i] != 0){
	z = i-1;
	PORTA |= (1<<z);
	}}

for(i=9;i<17;i++){
	if(x[i] != 0){
	y = i-9;
	PORTB |= (1<<y);
	}}

	}
}

