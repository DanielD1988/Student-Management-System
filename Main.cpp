#include <iostream>
#include <string>
#include "Student.h"
#include <vector>
#include <limits>
#include <ios>

void mainMenu();
void subMenu1();
void subMenu2();

int main() {

	int option = 0 ,subOption = 0,grade = 0,stringCmpResult = 0;
	std::string firstName,lastName,email,DOB,checkForId,address;
	long phoneNumber = 0;
	std::vector <Student> myVector;
	Student* student,*stu;
	Courses* course = new Courses;
	bool isTrue = false;

	while (option != 3) {
		mainMenu();
		std::cin >> option;
		subOption = 0;//reset subOption variable 
		if (option == 1) {//outer loop
			std::cout << "\n\t\t\t\t\t\t_____________" << std::endl;
			std::cout << "\t\t\t\t\t\tYou chose 1" << std::endl;
			std::cout << "\t\t\t\t\t\t_____________" << std::endl;
			while (subOption != 3) {
				subMenu1();
				std::cin >> subOption;
				
				switch (subOption) {
				case 1:
					std::cout << "Fill in student details" << std::endl;
					std::cout << "Enter first name ";
					std::cin >> firstName;
					std::cout << "\nEnter last name ";
					std::cin >> lastName;
					std::cout << "\nEnter DOB ";
					std::cin >> DOB;
					std::cout << "\nEnter email ";
					std::cin >> email;
					std::cin.ignore(1, '\n');
					std::cout << "\nEnter address ";
					std::getline(std::cin,address);
					//Error checking for valid number
					while (isTrue == false) {
						std::cout << "\nEnter phone number ";
						if (std::cin >> phoneNumber) {
							isTrue = true;
						}
						else {
							//Clear last input
							std::cin.clear();
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

							isTrue = false;
							std::cout << "\n<<<You didn't enter a number>>>" << std::endl;
						}
					}
					isTrue = false;
					//Error checking for valid number
					while (isTrue == false) {
						std::cout << "\nEnter students average grade ";
						if (std::cin >> grade) {
							isTrue = true;
						}
						else {
							std::cin.clear();
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							isTrue = false;
							std::cout << "\n<<<You didn't enter a number>>>" << std::endl;
						}
					}
					student = new Student(firstName,lastName,DOB,email,address,phoneNumber,grade);
					student->setCourseId();//Choose students course
					myVector.push_back(*student);//Store created student in a list
					break;
				case 2:
					if (!myVector.empty()) {//if student list isn't empty
						std::cout << "Enter student id ";
						std::cin >> checkForId;
						for (Student& x : myVector) {
							stringCmpResult = checkForId.compare(x.getCourseId());
							if (stringCmpResult == 0) {
								x.printStudentDetails();//print student details of student
								break;
							}
						}
						if (stringCmpResult != 0) {
							std::cout << "No student id found" << std::endl;
						}
					}
					else {
						std::cout << "No Student accounts" << std::endl;
					}
					break;
				case 3:
					std::cout << "Exiting Faculty Menu\n" << std::endl;
					break;
				default :	
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "\n\t\t\t\t\t ***You Didn't choose one of the options****\n" << std::endl;
				}//end of faculty switch
			}
		}//end of if
		else if (option == 2){//outer loop
			std::cout << "\n\t\t\t\t\t\t_____________" << std::endl;
			std::cout << "\t\t\t\t\t\tYou chose 2" << std::endl;
			std::cout << "\t\t\t\t\t\t_____________" << std::endl;
			while (subOption != 4) {
				subMenu2();
				std::cin >> subOption;

				switch (subOption) {
				case 1:
					stu = new Student();
					stu->showSubjects();
					break;
				case 2:
					if (!myVector.empty()) {
						std::cout << "Enter student id ";
						std::cin >> checkForId;
						for (Student& x : myVector) {
							stringCmpResult = checkForId.compare(x.getCourseId());
							if (stringCmpResult == 0) {
								x.getGrades();
								break;
							}
						}
						if (stringCmpResult != 0) {
							std::cout << "No student id found" << std::endl;
						}
					}
					else {
						std::cout << "No Student accounts" << std::endl;
					}
					break;
				case 3:
					std::cout << "Exiting Student Menu\n" << std::endl;
					break;
				default:
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "\n\t\t\t\t\t  ***You Didn't choose one of the options****\n" << std::endl;
				}//end of faculty switch
			}
		}
		else if (option == 3) {
			std::cout << "Exiting System" << std::endl;
		}
		else if (option < 1 || option > 3){
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\n\t\t\t\t   ***You Didn't choose one of the options****\n" << std::endl;
		}
	}
	return 0;
}

void mainMenu() {
	std::cout << "\t\t\t\t\t\t --Main Menu--\n" << std::endl;
	std::cout << "\t\t\t\t\t  Choose one of the following\n" << std::endl;
	std::cout << "\t\t\t\t\t\t1 Faculty Menu\n" << std::endl;
	std::cout << "\t\t\t\t\t\t2 Student Menu\n" << std::endl;
	std::cout << "\t\t\t\t\t\t3 Exit System\n" << std::endl;
	std::cout << "\t\t\t\t\t\t> ";
}

void subMenu1() {
	std::cout << "\n\t\t\t\t\t\t--Faculty Menu--\n" << std::endl;
	std::cout << "\t\t\t\t\t  Choose one of the following\n" << std::endl;
	std::cout << "\t\t\t\t\t\t1 Create Student Account\n" << std::endl;
	std::cout << "\t\t\t\t\t\t2 Search For Students record\n" << std::endl;
	std::cout << "\t\t\t\t\t\t3 To Return to Main Menu\n" << std::endl;
	std::cout << "\t\t\t\t\t\t> ";
}

void subMenu2() {
	std::cout << "\t\t\t\t\t\t --Student Menu--\n" << std::endl;
	std::cout << "\t\t\t\t\t\tChoose one of the following\n" << std::endl;
	std::cout << "\t\t\t\t\t\t1 Course Details\n" << std::endl;
	std::cout << "\t\t\t\t\t\t2 View Grades\n" << std::endl;
	std::cout << "\t\t\t\t\t\t4 To Return to Main Menu\n" << std::endl;
	std::cout << "\t\t\t\t\t\t> ";
}