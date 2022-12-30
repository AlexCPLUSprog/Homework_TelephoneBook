#pragma once
#include <string>
#include <iostream>
class TelephoneBook
{
public:
	TelephoneBook(const std::string& name, const std::string& family, const std::string& patr, int numHome, int numPhone, int numWork);
	TelephoneBook(const std::string& name, int number);
	TelephoneBook();

	const std::string& getName();
	void setName(const std::string& name);
	const std::string& getFamily();
	void setFamaly(const std::string& family);
	const std::string& getPatr();
	void setPatr(const std::string& patr);
	int getPhoneNum();
	void setPhoneNumber(int num);
	int getWorkNum();
	void setWorkNumber(int num);
	int getHnum();
	void setHnumber(int num);

private:
	std::string _name;
	std::string _family;
	std::string _patronymic;
	int _homeNumber;
	int _phoneNumber;
	int _workNumber;
};

void add_abonent(TelephoneBook arr[], const int length);
void show_all_abonent(TelephoneBook arr[], const int length);
int retNumAbonent(std::string& name, TelephoneBook arr[], const int length);
void del_abonent(TelephoneBook arr[], const int length);
int actions();