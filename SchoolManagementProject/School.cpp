#include "School.h"
#include <string>
#include <vector>
#include <filesystem>
#include <fstream>
#include <algorithm>
using namespace std;

School::School(string n)
{
	name = n;
}

string School::get_name() const
{
	return name;
}

void School::Add_Student()
{

}

void School::Remove_Student()
{
}

void School::Add_Teacher()
{
}

void School::Remove_Teacher()
{
}

void School::Schdule_Exams()
{
}

void School::Add_Course()
{
}

void School::Remove_Course()
{
}

vector<Student> loadStudents(const string& filename) 
{
	
	
	vector <Student> students;

	ifstream istream(filename);
	int n;
	istream >> n;
	for (int i = 0; i < n; i++) {
		string studentname;
		int id;
		istream >> id >> studentname;
		replace(studentname.begin(), studentname.end(), '_', ' ');
		Student s;
		s.set_ID(id);
		s.set_name(studentname);

		students.push_back(s);
	}
	
	return students;
}

void savestudent(vector<Student>& students, const string& filename)
{
	ofstream ostream(filename);
	ostream << students.size();
	for (const Student s : students) {
		string name = s.get_name();
		replace(name.begin(), name.end(), ' ', '_');
		ostream << "\n" << s.get_ID() << ' ' << name;
	}
}


