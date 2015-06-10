#ifndef _INCLUDE_MOVEMENTS_QUADDOMINANT_H_
#define _INCLUDE_MOVEMENTS_QUADDOMINANT_H_

class quadDominant
{
private:
	//Does 1RM calculation for any quad dominant movement
	virtual int oneRMCalculator(int weight, int numReps);
	quadDominant();
	~quadDominant();

public:

	//outputs a random movement from exercise array
	void randomMovement(void* exercise);

}
#endif
