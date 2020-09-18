#include <string>
#include <iostream>
#ifndef STUDENT_HEADER//Header Gaurd
#define STUDENT_HEADER
#include "Courses.h"

class Student{
private:
	std::string firstName;
	std::string lastName;
	std::string address;
	std::string email;
	std::string DOB;
	std::string courseId;
	int grades = 0;
	long phoneNumber = 0;
	Courses* course = new Courses;
public:
	
	Student();
	Student(std::string firstName, std::string lastName, std::string email, std::string DOB, std::string address, long phoneNumber, int grades);
	void setCourseId();
	std::string getCourseId();
	int getGrades();
	void showSubjects();
	void printStudentDetails();
	~Student();
};
#endif;
