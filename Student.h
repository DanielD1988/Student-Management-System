#include <string>
#include <iostream>

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

public:
	
	Student(std::string firstName,std::string lastName,std::string email,std::string DOB,long phoneNumber,int grades) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->address = address;
		this->email = email;
		this->DOB = DOB;
		this->phoneNumber = phoneNumber;
		this->grades = grades;
	}

	void setCourseId(std::string courseId) {
		
		this->courseId = courseId;
	}
	std::string getCourseId() {
		
		return courseId;
	}

	int getGrades() {

		return grades;
	}

	void printStudentDetails() {
		std::cout << "Student First Name " << firstName << std::endl;
		std::cout << "Student Last Name " << lastName << std::endl;
		//std::cout << "Student address " << address << std::endl;
		std::cout << "Student Email " << email << std::endl;
		std::cout << "Student DOB " << DOB << std::endl;
		std::cout << "Student Phone Number " << phoneNumber << std::endl;
		std::cout << "Student Grades " << grades << std::endl;
		std::cout << std::endl;
		//std::cout << "Student Course Id " << courseId << std::endl;
	}
};

