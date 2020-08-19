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

	int option = 0 ,subOption = 0,grade = 0;
	std::string firstName,lastName,email,DOB;
	long phoneNumber = 0;
	std::vector <Student> myVector;
	Student* student;
	bool isTrue = false;

	while (option != 3) {
		mainMenu();
		std::cin >> option;
		subOption = 0;//reset subOption variable 
		if (option == 1) {

			std::cout << "You choose 1" << std::endl;
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

					while (isTrue == false) {
						std::cout << "\nEnter phone number ";
						if (std::cin >> phoneNumber) {
							isTrue = true;
						}
						else {
							std::cin.clear();
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							isTrue = false;
							std::cout << "\n<<<You didn't enter a number>>>" << std::endl;
						}
					}
					isTrue = false;
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
					student = new Student(firstName,lastName,DOB,email,phoneNumber,grade);
					myVector.push_back(*student);
					break;
				case 2:
					if (!myVector.empty()) {
						for (Student& x : myVector) {
							x.printStudentDetails();
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
		else if (option == 2){
			std::cout << "You choose 2" << std::endl;
			while (subOption != 4) {
				subMenu2();
				std::cin >> subOption;

				switch (subOption) {
				case 1:
					//Todo Course Details
					break;
				case 2:
					//Todo View Grades
					break;
				case 3:
					//Enter Change Student Deatils
					break;
				case 4:
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
	std::cout << "\t\t\t\t\t\t   --Faculty Menu--\n" << std::endl;
	std::cout << "\t\t\t\t\t\tChoose one of the following\n" << std::endl;
	std::cout << "\t\t\t\t\t\t1 Create Student Account\n" << std::endl;
	std::cout << "\t\t\t\t\t\t2 Search For Student\n" << std::endl;
	std::cout << "\t\t\t\t\t\t3 To Return to Main Menu\n" << std::endl;
	std::cout << "\t\t\t\t\t\t> ";
}

void subMenu2() {
	std::cout << "\t\t\t\t\t\t --Student Menu--\n" << std::endl;
	std::cout << "\t\t\t\t\t\tChoose one of the following\n" << std::endl;
	std::cout << "\t\t\t\t\t\t1 Course Details\n" << std::endl;
	std::cout << "\t\t\t\t\t\t2 View Grades\n" << std::endl;
	std::cout << "\t\t\t\t\t\t3 Change Phone/Address\n" << std::endl;
	std::cout << "\t\t\t\t\t\t4 To Return to Main Menu\n" << std::endl;
	std::cout << "\t\t\t\t\t\t> ";
}