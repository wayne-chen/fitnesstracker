#ifndef _STARTINGSTRENGTHROUTINE_H_
#define _STARTINGSTRENGTHROUTINE_H_

#include "ImplicitWorkoutCalculator.h"

class StartingStrength : public ImplicitWorkoutCalculator
{
private:

	int oneRMCalculator(int weight, int reps);


public:

	//TODO need to combine all relevant exercises needed into routineOut as arguments
	void routineOut(/*Arguments*/);

}
#endif
