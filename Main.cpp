#include <iostream>
#include <string>

void mainMenu();
void subMenu1();
void subMenu2();

int main() {

	int option = 0 ,subOption = 0;

	while (option != 3) {
		mainMenu();
		std::cin >> option;
		subOption = 0;//reset subOption variable 
		if (option == 1) {

			std::cout << "You choose 1" << std::endl;
			while (subOption != 4) {
				subMenu1();
				std::cin >> subOption;
				
				switch (subOption) {
				case 1:
					//Todo Create student account
					break;
				case 2:
					//Todo Search for students
					break;
				case 3:
					//Enter Student Grades
					break;
				case 4:
					std::cout << "Exiting Faculty Menu\n" << std::endl;
					break;
				default :	
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
					std::cout << "\n\t\t\t\t\t  ***You Didn't choose one of the options****\n" << std::endl;
				}//end of faculty switch
			}
		}
		else if (option == 3) {
			std::cout << "Exiting System" << std::endl;
		}
		else if (option < 1 || option > 3){
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
	std::cout << "\t\t\t\t\t\t3 Enter Student Grades\n" << std::endl;
	std::cout << "\t\t\t\t\t\t4 To Return to Main Menu\n" << std::endl;
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