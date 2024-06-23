#include "Student.h"

Student::Student(string n, int id) : FirstYear()
{
	ID = id >= 0 ? id : 0;
	name = n;
	for (int i = 0; i <= 2; i++) {
		Attendance[i]= true;
	}
}

string Student::get_name() const
{
	return name;
}

int Student::get_ID() const
{
	return ID;
}

void Student::Enroll_Course(Course s)
{
	courses_enrolled.push_back(s);

}

void Student::set_name(string n)
{
	name = n;
}

void Student::set_ID(int id)
{
	ID = id;
}

/*void Student::set_absence()
{
	for (int i = 0; i <= 2;i++) {
		if (Attendance[i] == true) {
			Attendance[i] = false;
			return;
		}
	}
}

bool Student::get_attendance() const
{
	return Attendance;
}*/

void Student::set_ExamRecords(Course s, float m, float f)
{
	ExamRecords.push_back(Record(s, m, f));
}
