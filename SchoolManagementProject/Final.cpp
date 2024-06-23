#include "Final.h"

Final::Final() :Exams()
{
}

void Final::AddExam(ScheduleExam e)
{
	Finals.push_back(e);
}

void Final::DeleteExam(ScheduleExam e)
{
	vector< ScheduleExam> temp;
	for (ScheduleExam s : Finals) {

		if (!(e.get_Module().get_CourseName() == s.get_Module().get_CourseName())) {
			temp.push_back(s);
		}

	}

	Finals = temp;
}
