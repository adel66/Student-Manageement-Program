#include "Midterm.h"

Midterm::Midterm() : Exams()
{
}

void Midterm::AddExam(ScheduleExam e)
{
	Midterms.push_back(e);
}

void Midterm::DeleteExam(ScheduleExam e)
{
	vector< ScheduleExam> temp;
	for (ScheduleExam s : Midterms) {

		if (!(e.get_Module().get_CourseName() == s.get_Module().get_CourseName())) {
			temp.push_back(s);
		}

	}

	Midterms = temp;
}
