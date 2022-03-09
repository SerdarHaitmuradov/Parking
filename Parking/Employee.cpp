#include "User_interface.h"

void Employee::setEmpl() 
{
	out.open("Employee.txt", std::ios::app);
	if (out.is_open())
	{
		std::cout << "Input Employee name" << std::endl;
		std::cin >> Employee::name;


		std::cout << "Input Employee second name" << std::endl;
		std::cin >> Employee::middleName;


		std::cout << "Input Employee post" << std::endl;
		std::cin >> Employee::post;


		std::cout << "Input Employee salary" << std::endl;
		std::cin >> Employee::salary;

		out << name << " " << middleName << " " << post << " " << salary << std::endl;
		out.close();
	}
}
void Employee::getEmpl() 
{
	std::ifstream in;
	in.open("Employee.txt");
	std::string str;
	while (getline(in, str))
	{
		std::cout << str << std::endl;
	}
}