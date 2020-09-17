#include "Student.h"
#include <string>
#include <iostream>


Student::Student() {

}

Student::Student(std::string firstName, std::string lastName, std::string email, std::string DOB, std::string address, long phoneNumber, int grades){
	this->firstName = firstName;
	this->lastName = lastName;
	this->address = address;
	this->email = email;
	this->DOB = DOB;
	this->phoneNumber = phoneNumber;
	this->grades = grades;
}

void Student::setCourseId() {

	this->courseId = course->enroleSudent();
}

std::string Student::getCourseId() {

	return courseId;
}

int Student::getGrades() {

	return grades;
}

void Student::showSubjects() {
	course->showCourseSubjects();
}
void Student::printStudentDetails() {
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

Student::~Student() {}