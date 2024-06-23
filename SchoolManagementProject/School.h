#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Exams.h"
#include "Final.h"
#include "Midterm.h"
#include <fstream>
#include <filesystem>

class School
{
private:

	string name;
	vector<Student> Students;
	vector <Teacher> Teachers;
	vector <Course> Courses;
	vector <Final> Finals;
	vector <Midterm> Midterms;

public:
	School(string = "");
	string get_name() const;
	void Add_Student();
	void Remove_Student();
	void Add_Teacher();
	void Remove_Teacher();
	void Schdule_Exams();
	void Add_Course();
	void Remove_Course();
	 
	//vector<Teacher> loadTeacheras() ;
	//vector <Final>loadFinal() ;
	//vector <Midterm> loadMidterm() ;
	
	               
};

vector<Student> loadStudents(const string& filename);
void savestudent(vector<Student>& students, const string& filename);