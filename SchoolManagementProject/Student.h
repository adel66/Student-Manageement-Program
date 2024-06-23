#pragma once
#include"Course.h"
#include "Record.h"
#include "FirstYear.h"

class Student : public FirstYear
{
private:
	string name;
	int ID;
	vector<Course> courses_enrolled;
	bool Attendance[3];
	vector<Record> ExamRecords;


public:
	Student(string = "", int = -1);
	string get_name() const;
	int get_ID() const;
	void Enroll_Course(Course);
	void set_name(string );
	void set_ID(int);
	//void set_absence();
	//bool get_attendance() const;
	void set_ExamRecords(Course, float = 0, float = 0);

};

