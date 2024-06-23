#pragma once
#include "Exams.h"
#include "ScheduleExam.h"

class Midterm : public Exams
{
private:

	vector <ScheduleExam> Midterms;

public:
	Midterm();
	void AddExam(ScheduleExam);
	void DeleteExam(ScheduleExam);

};


