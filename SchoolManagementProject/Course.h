#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Course
{
private:

	string CourseName;
	vector<string> resources;
public:
	Course(string = "");
	string get_CourseName() const;
	vector <string> get_resources() const;
	//void set_Resources();

};

