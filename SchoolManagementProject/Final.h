#pragma once
#include "Exams.h"
#include "ScheduleExam.h"

class Final : public Exams
{
private:

	vector <ScheduleExam> Finals;

public:
	Final();
	void AddExam(ScheduleExam);
	void DeleteExam(ScheduleExam);

};

