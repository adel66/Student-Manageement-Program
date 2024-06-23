#include "Course.h"

Course::Course(string name)
{
	CourseName = name;
}

string Course::get_CourseName() const
{
	return CourseName;
}

/*void Course::set_Resources()
{

	while (true) {
		cout << "You Want To add a resource for the " << get_CourseName() << " module (yes/no)? :" << endl;
		string answer;
		cin >> answer;
		if (answer == "no") {
			break;
		}
		else {
			string rs;
			cout << "Please Enter the resource link or name : " << endl;
			cin >> rs;
			resources.push_back(rs);
		}
	}
}*/

vector<string> Course::get_resources() const
{
	return resources;
}


