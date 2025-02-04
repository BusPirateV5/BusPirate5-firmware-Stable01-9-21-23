
#include <stdio.h>
#include "pico/stdlib.h"
#include "pirate.h"
#include "system_config.h"
#include "hardware/uart.h"
#include "hiz.h"
#include "bio.h"	
#include "psu.h"
#include "pullups.h"


const char *HiZpins(void)
{
	return "-\t-\t-\t-\t-\t-\t-\t-";
}

const char *HiZerror(void){
	return t[T_MODE_ERROR_NO_EFFECT_HIZ];
}

void HiZsettings(void)
{
	printf("HiZ ()=()");
}


void HiZcleanup(void)
{
}

uint32_t HiZsetup(void)
{
	return 1;
}

// this is called duringmode changes; takes care pwm, vpu and psu is turned off, also AUX to input
uint32_t HiZsetup_exc(void)
{
	// turn everything off
	bio_init();     // make all pins safe
	psu_reset();    // disable psu and reset pin label
    psu_cleanup();  // clear any errors
	pullups_cleanup(); //deactivate
	system_config.freq_active=0;
	system_config.pwm_active=0;
	system_config.aux_active=0;

	for(int i=0;i<count_of(bio2bufiopin);i++)
	{
		system_bio_claim(false, i, BP_PIN_IO,0);
	}

	return 1;
}


