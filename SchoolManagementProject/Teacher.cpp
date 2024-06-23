#include "Teacher.h"

Teacher::Teacher(string n, int id)
{
	name = n;
	ID = id;
}

string Teacher::get_name() const
{
	return name;
}

int Teacher::get_ID() const
{
	return ID;
}

void Teacher::set_name(string n)
{
	name = n;
}

void Teacher::set_ID(int id)
{
	ID = id;
}

Course Teacher::Assign_Course(Course s)
{
	courses_taught.push_back(s);
	return Course();
}
