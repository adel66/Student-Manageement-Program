#pragma once
#include "Course.h"
class Teacher
{
private:
	string name;
	int ID;
	vector<Course> courses_taught;

public:
	Teacher(string = "",int = -1);
	string get_name() const;
	int get_ID() const;
	void set_name(string);
	void set_ID(int);
	Course Assign_Course(Course);

};

