#ifndef _IMPLICITWORKOUTCALCULATOR_H_
#define _IMPLICITWORKOUTCALCULATOR_H_

class ImplicitWorkoutCalculator
{
private:

	//TODO have different classes for each of these types of movements instead???
	typedef int horizPush;
	typedef int horizPull;
	typedef int vertPush;
	typedef int vertPull;
	typedef int quadDominant;
	typedef int hipHamstringDominant;
	typedef int elbowFlexion;
	typedef int elbowExtension;
	typedef int accessoryMovements;

	//to describe complex movements(not very accurate)
	typedef int complexMovements;

	uint smallestWeightAvailable;

	//weight for each number of reps to determine routine's weights
	quadDominant backSquat;
	horizPush flatBenchBarbell;
	hipHamstringDominant deadlift;
	vertPush overheadPress;
	complexMovements powerClean;

	//number of reps for each exercise to calculate routine's weights
	int numRepsSquat;
	int numRepsBench;
	int numRepsDeadlift;
	int numRepsOHP;
	complexMovements numRepsClean;

	//For non-beginner calculation
	// if (!beginner && olylifting){
	// int weightCnJ;
	// int numRepsCnJ;
	// int weightSnatch;
	// int numRepsSnatch;}

	ImplicitWorkoutCalculator();
	~ImplicitWorkoutCalculator();

	//calculates 1rm for certain exercise
	virtual int oneRMCalculator();

public:
	//Metabolic rates
	uint weightliftingMET = 3.0;
	uint runningMET = 7.50;
	//TODO add more METs for people who do different activities

	//returns an xls sheet with the workout routine
	virtual void routineOut();
}

#endif
