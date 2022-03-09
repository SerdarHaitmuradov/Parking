#pragma once
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <fstream>





class Customer 
{
public:
	Customer()
		:carsNum(0)
		, numPlace(0)
		, carsMark("")
		, ownerName("")
		, ownerSecondName("")
		, ownerId("")
	{}
	Customer(std::string on, std::string osn, std::string oi, short cn, std::string cm,short np)
		:carsNum(cn)
		, numPlace(np)
		, carsMark(cm)
		, ownerName(on)
		, ownerSecondName(osn)
		, ownerId(oi)
	{}
	friend bool operator<(const Customer&, const Customer&);
	friend std::ostream& operator <<(std::ostream&, const Customer&);
	void setCus();
	void getcus();
	~Customer();
private:
	std::ofstream out;
	std::string ownerName;
	std::string ownerSecondName;
	std::string ownerId;
	short carsNum;
	std::string carsMark;
	short numPlace;
};



class CustomerList 
{
public:
	void pushCustomers(std::vector<Customer> &vecCus);
	short outputPlace(short place);
	void showCustomers();
private:
	std::vector<Customer> vecCus;
};


class CustomerInputToList 
{
public:
	CustomerInputToList(CustomerList* cusList)
		: customerList(cusList)
	{
	}
	void getCustomer();
private:
	CustomerList* customerList;
	Customer cus;
};

class Employee
{
public:
	Employee() = default;
	Employee(std::string n, std::string mn, std::string p, short s)
		: name(n)
		, middleName(mn)
		, post(p)
		, salary(s)
	{}
	void setEmpl();
	void getEmpl();
private:
	std::ofstream out;
	std::string name;
	std::string middleName;
	std::string post;
	short salary;
};


class UserInterface 
{
public:
	void start();
	~UserInterface();
private:
	Customer cus;
	Employee empl;
};