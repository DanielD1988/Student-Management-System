#include "Courses.h"
#include <iostream>
#include <string>
//Assign static variables a value
int Courses::computing = 0;
int Courses::science = 0;
int Courses::engineering = 0;
int Courses::business = 0;

Courses::Courses() {

}

std::string Courses::enroleSudent() {

	std::string courseId;
	while (option != 0) {
		chooseCourse();
		std::cin >> option;
		switch (option) {
		case 1:
			courseCode = "CW1";
			courseId = courseCode + std::to_string(computing);
			computing++;
			break;
		case 2:
			courseCode = "CW2";
			courseId = courseCode + std::to_string(science);
			science++;
			break;
		case 3:
			courseCode = "CW3";
			courseId = courseCode + std::to_string(engineering);
			engineering++;
			break;
		case 4:
			courseCode = "CW4";
			courseId = courseCode + std::to_string(business);
			business++;
			break;
		}
		if (option < 1 || option > 4) {
			std::cout << "\nYou didn't choose one of the following options" << std::endl;
			option = 1;
		}
		else {
			option = 0;
		}
	}//end of while
	return courseId;
}

void Courses::showCourseSubjects() {
	chooseCourse();
	std::cin >> option;
	switch (option) {
	case 1:
		std::cout << "Programming Networking Maths" << std::endl;
		break;
	case 2:
		std::cout << "Maths Chemistry Biology" << std::endl;
		break;
	case 3:
		std::cout << "Physics Electronics Maths" << std::endl;
		break;
	case 4:
		std::cout << "Accounting Marketing Administration" << std::endl;
		break;
	default:
		std::cout << "You didin't choose one of the courses \nNow exiting menu" << std::endl;
	}
}

void Courses::chooseCourse() {
	std::cout << "\t\t\t\t\t\t--Courses--\n" << std::endl;
	std::cout << "\t\t\t\t\t\t  Choose one of the following\n" << std::endl;
	std::cout << "\t\t\t\t\t\t1 Computing\n" << std::endl;
	std::cout << "\t\t\t\t\t\t2 Science\n" << std::endl;
	std::cout << "\t\t\t\t\t\t3 Engineering\n" << std::endl;
	std::cout << "\t\t\t\t\t\t4 Business\n" << std::endl;
	std::cout << "\t\t\t\t\t\t> ";
}

Courses::~Courses() {};