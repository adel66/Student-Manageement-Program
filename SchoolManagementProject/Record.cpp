#include "Record.h"

Record::Record(Course s,float m ,float f)
{
	set_All(m, f);
}

float Record::get_MidterMark() const
{
	return Midterm_Mark;
}

float Record::get_FinalMark() const
{
	return Final_Mark;
}

void Record::set_All(float m, float f)
{
	Midterm_Mark = m >= 0 ? m : 0;
	Final_Mark = f >= 0 ? f : 0;
}

void Record::set_MidtermMark(float m)
{
	Midterm_Mark = m >= 0 ? m : 0;
}

void Record::set_FinalMark(float f)
{
	Final_Mark = f >= 0 ? f : 0;
}



