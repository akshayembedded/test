#include <lpc213x.h>
int main()
{
	PINSEL0=1<<17;//
	PWMMR0=50000;//50ms time period 50000US ==> 50ms
	PWMMR4=2000;//duty cycle 2ms
	PWMTCR=2;
	PWMTCR=1|(1<<3);
	PWMPR=14;//1us
	PWMMCR=1<<1;
	PWMPCR=1<<12;
	PWMTC=0;	   
	PWMPC=0;
	while(1)
	{
		if((IO1PIN&(1<<16))==0)
	{
		PWMMR0=50000;//50ms
		PWMMR4=2000;	//2ms
		PWMLER=(1<<0)|(1<<4);
	}
	else if((IO1PIN&(1<<17))==0)
	{
		PWMMR0=50000;//50ms
		PWMMR4=1500;//1.5ms
			PWMLER=(1<<0)|(1<<4);
	}
	else if((IO1PIN&(1<<18))==0)
	{
		PWMMR0=50000;
		PWMMR4=1000;
			PWMLER=(1<<0)|(1<<4);
	}
	else if((IO1PIN&(1<<19))==0)
	{
		PWMMR0=50000;
		PWMMR4=1200;
			PWMLER=(1<<0)|(1<<4);
	}
	}
}