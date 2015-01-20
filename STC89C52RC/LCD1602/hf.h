#ifndef __HF_H__
#define __HF_H__

int delay(int ms)
	{
		unsigned char j;
		for(;ms!=0;ms--)
		for(j=98;j>0;j--);
		return 0;
	}

#endif
