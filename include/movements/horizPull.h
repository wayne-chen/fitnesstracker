#ifndef _INCLUDE_MOVEMENTS_HORIZPULL_H_
#define _INCLUDE_MOVEMENTS_HORIZPULL_H_

//base class for horizontal pull movements
class horizPull
{
private:
	horizPull();
	~horizPull();

//these are inherited
public:
	int bodyWeight;
	int numReps;
	//outputs a random movement from exercise array
	void randomMovement(void* exercise);
	//Does 1RM calculation for any horizontal pull
	float oneRMCalculator(int weight, int numReps);

};

//includes all of the horizontal pull movements
class pullUp : public horizPull
{
private:

public:
	pullUp(int bodyWeight);
};

class latPulldown : public horizPull
{
private:

public:

};

class chinUp : public horizPull
{
private:

public:

};

#endif
