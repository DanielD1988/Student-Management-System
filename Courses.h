#include <iostream>
#include <string>

class Courses{

private:
	std::string courseCode;
	std::string subjects;
	static int computing, science, engineering, business;//used to assign a different course id to each student 
	int option = 1;
	
public:
	Courses();
	std::string enroleSudent();
	void showCourseSubjects();
	void chooseCourse();
	~Courses();
};

