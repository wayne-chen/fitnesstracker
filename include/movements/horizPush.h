#ifndef _INCLUDE_MOVEMENTS_HORIZPUSH_H_
#define _INCLUDE_MOVEMENTS_HORIZPUSH_H_

//base class for horizontal pull movements
class horizPull
{
private:
	horizPull();
	~horizPull();

public:
	int weight;
	int numReps;
	//outputs a random movement from exercise array
	void randomMovement(void* exercise);
	//Does 1RM calculation for any horizontal pull
	virtual float oneRMCalculator(int weight, int numReps);

};

#endif

