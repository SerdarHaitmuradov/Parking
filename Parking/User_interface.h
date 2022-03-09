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
	void pushCustomers(Customer*);
	short outputPlace(short place);
	void showCustomers();
private:
	std::set<Customer*> customersList;
	std::set<Customer*>::iterator iterCustomer;
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


class UserInterface 
{
public:
	void start();
	~UserInterface();
private:
	Customer cus;
};