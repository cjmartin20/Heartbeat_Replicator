#include "mbed.h"

// main() runs in its own thread in the OS
int main () {
	while (1) {
		Heartbeat
		for (int i = 0; i<3; i++) {
			led1 = 1;
			ThisThread::sleep_for( 10ms );
			led1 = 0;
			ThisThread::sleep_for( 45ms );
		}
		for (int i = 0; i<3; i++) {
			led1 = 1;
			ThisThread::sleep_for( 10ms );
			led1 = 0;
			ThisThread::sleep_for( 25ms );
		}
		for (int i = 0; i<8; i++) {
			led1 = 1;
			ThisThread::sleep_for( 10ms );
			led1 = 0;
			ThisThread::sleep_for( 12ms );
		}
		led1 = 1;
		ThisThread::sleep_for( 200ms );
	} // end while
} // end main
