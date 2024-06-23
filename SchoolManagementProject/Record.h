#pragma once
#include "Course.h"

class Record
{
private:
	Course Module;
	float Midterm_Mark;
	float Final_Mark;
public:
	Record(Course = Course(),float = 0,float = 0);
	float get_MidterMark() const;
	float get_FinalMark() const;
	void set_All(float,float);
	void set_MidtermMark(float);
	void set_FinalMark(float);
};

