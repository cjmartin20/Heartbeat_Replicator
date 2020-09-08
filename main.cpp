
/*
 * 	Question 1
	led1 = 0;
        for (int i = 0; i<7; i++) {
		led1 = 1;
		ThisThread::sleep_for( 10ms );
		led1 = 0;
		ThisThread::sleep_for( 90ms );
        }
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
*/

/*trash
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);
            led2 = !led2;
            led3 = !led3;
		led1 = !led1;
		led2 = !led2;
		ThisThread::sleep_for(30ms);
		led2 = !led2;
		led3 = !led3;
		ThisThread::sleep_for(30ms);
		led3 = !led3;
	led2 = 0;
	led3 = 0;
*/
