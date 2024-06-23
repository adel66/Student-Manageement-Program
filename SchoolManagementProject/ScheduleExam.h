#pragma once
#include "Course.h"
#include "date.h"
class ScheduleExam
{
private:
	Course Module;
	date ExamDate;

public:
	ScheduleExam(Course = Course(), date = date());
	date get_ExamDate() const;
	Course get_Module() const;
};

