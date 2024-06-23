#include "ScheduleExam.h"

ScheduleExam::ScheduleExam(Course s, date t)
{
	Module = s;
	ExamDate = t;
}

date ScheduleExam::get_ExamDate() const
{
	return ExamDate;
}

Course ScheduleExam::get_Module() const
{
	return Module;
}
