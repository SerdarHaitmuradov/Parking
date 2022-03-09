#include "User_interface.h"


void Customer::setCus()
{
		out.open("file.txt", std::ios::app);
		if (out.is_open())
		{
			std::cout << "Input owners name" << std::endl;
			std::cin >> Customer::ownerName;


			std::cout << "Input owners second name" << std::endl;
			std::cin >> Customer::ownerSecondName;


			std::cout << "Input owners ID" << std::endl;
			std::cin >> Customer::ownerId;


			std::cout << "Input your cars number" << std::endl;
			std::cin >> Customer::carsNum;


			std::cout << "Input yours cars mark" << std::endl;
			std::cin >> Customer::carsMark;


			std::cout << "Input your number of place" << std::endl;
			std::cin >> Customer::numPlace;

			out << ownerName << " " << ownerSecondName << " " << ownerId << " " << carsNum << " " << carsMark << " " << numPlace << std::endl;
		}
}
void Customer::getcus() 
{
	std::ifstream in;
	in.open("file.txt");
	std::string str;
	while (getline(in, str))
	{
		std::cout << str << std::endl;
	}
}

Customer::~Customer() 
{

}