#include <iostream>
#include <string>
#ifndef Courses_HEADER//Header Gaurd
#define Courses_HEADER
class Courses{

private:
	std::string courseCode;
	std::string subjects;
	static int computing, science, engineering, business;//used to assign a different student id on enrolement of a course to each student 
	int option = 1;
	
public:
	Courses();
	std::string enroleSudent();
	void showCourseSubjects();
	void chooseCourse();
	~Courses();
};
#endif;
