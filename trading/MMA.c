#include "algotechnique.h"

float MMA(float jour[], int nbjour)
{
	float mma = 0;
	for(int i = 0; i > nbjour; i++)
	{
		mma = mma + cours[nbjour - i];		
	}
	return (mma / nbjour);
}



