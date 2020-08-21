#include <string>
#include <iostream>
#ifndef Courses_HEADER
#define Courses_HEADER
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
	long phoneNumber;
	Courses* course = new Courses;

public:
	
	Student(){

	}

	Student(std::string firstName,std::string lastName,std::string email,std::string DOB, std::string address,long phoneNumber,int grades) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->address = address;
		this->email = email;
		this->DOB = DOB;
		this->phoneNumber = phoneNumber;
		this->grades = grades;
	}

	void setCourseId() {
		
		this->courseId = course->enroleSudent();
	}
	std::string getCourseId() {
		
		return courseId;
	}

	int getGrades() {

		return grades;
	}
	void showSubjects() {
		course->showCourseSubjects();
	}
	void printStudentDetails() {
		std::cout << "Student First Name: " << firstName << std::endl;
		std::cout << "Student Last Name: " << lastName << std::endl;
		std::cout << "Student Address: " << address << std::endl;
		std::cout << "Student Email: " << email << std::endl;
		std::cout << "Student DOB: " << DOB << std::endl;
		std::cout << "Student Phone Number: " << phoneNumber << std::endl;
		std::cout << "Student Grades: " << grades << std::endl;
		std::cout << "Student Course Id: " << getCourseId() << std::endl;
		std::cout << std::endl;
	}
	~Student() {
	}
};
#endif;
