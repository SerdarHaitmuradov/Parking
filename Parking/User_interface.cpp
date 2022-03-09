#include "User_interface.h"

void UserInterface::start() 
{
	short choice;
	short choice_optional;
	char again = 'Y';

	do
	{
		std::cout << '\t' << '\t' << '\t' << "Welcome" << std::endl;
		std::cout << '\t' << "Select an item for further operations" << std::endl;
		std::cout << '\t' << "1. Customer " << std::endl;
		std::cout << '\t' << "2. Customers List " << std::endl;
		std::cout << '\t' << "3. Employee" << std::endl;
		std::cout << '\t' << "4. Reports " << std::endl;
		

		std::cin >> choice_optional;

		switch (choice_optional)
		{
			if (choice_optional == 1)
		case 1:
			{
				std::cout << '\t' << "1.New Customer" << std::endl;
				std::cout << '\t' << "2.Delete Customer" << std::endl;
				std::cin >> choice;
				switch (choice)
				{
				case 1:
					if (choice == 1)
					{
						UserInterface::cus.setCus();
						break;
					}
				}
			}
			if (choice_optional == 2)
		case 2:
			{
				UserInterface::cus.getcus();
				break;
			}
			if (choice_optional == 3)
		case 3:
			{
				std::cout << '\t' << "1.Add Employee" << std::endl;
				std::cout << '\t' << "2.Employee data" << std::endl;
				std::cin >> choice;
				switch (choice)
				{
					if (choice == 1)
				case 1:
					{
						UserInterface::empl.setEmpl();
						break;
					}
					if(choice==2)
				case 2:
					{
						UserInterface::empl.getEmpl();
					}
					
				}
				
			}
			
		}
	} while (true);
	
	

}
UserInterface::~UserInterface() 
{

}


