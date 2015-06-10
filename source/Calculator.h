#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include <cmath>
#include <string>

typedef unsigned int uint;

class Calculator
{
private:
	//general information for a person
	uint age;
	double weight;
	double height;

	char fitnessGoal;

	uint caloriesIn;

	// how many days per week one plans on exercising
	uint exerciseDaysPerWk;

	// build - strength/muscle/endurance (percentages?)
	std::string exerciseGoals;

	//

	Calculator();
	~Calculator();

public:
//What functions don't need to be inherited
	double BMI(/*what arguments to parse for BMI calculation?*/);
	//TODO what other stuff should I add?
	double caloriesBurned(/*arguments*/);

//What functions can be inherited

}

#endif
