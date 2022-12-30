#include "TelephoneBook.h"

TelephoneBook::TelephoneBook(const std::string& name, const std::string& family, const std::string& patr, int numH, int numP, int numW) :
	_name(name), _family(family), _patronymic(patr), _homeNumber(numH), _phoneNumber(numP), _workNumber(numW) {}

TelephoneBook::TelephoneBook(const std::string& name, int number) :_name(name), _phoneNumber(number) {}

TelephoneBook::TelephoneBook() :_name("name"), _family("famaly"), _patronymic("patr"), _homeNumber(0), _phoneNumber(000000), _workNumber(000000) {}

const std::string& TelephoneBook::getName() {
	return _name;
}
void TelephoneBook::setName(const std::string& name) {
	_name = name;
}
const std::string& TelephoneBook::getFamily() {
	return _family;
}
void TelephoneBook::setFamaly(const std::string& family) {
	_family = family;
}
const std::string& TelephoneBook::getPatr() {
	return _patronymic;
}
void TelephoneBook::setPatr(const std::string& patr) {
	_patronymic = patr;
}
void TelephoneBook::setPhoneNumber(int num) {
	_phoneNumber = num;
}
int TelephoneBook::getPhoneNum() {
	return _phoneNumber;
}
void TelephoneBook::setWorkNumber(int num) {
	_workNumber = num;
}
int TelephoneBook::getWorkNum() {
	return _workNumber;
}
void TelephoneBook::setHnumber(int num) {
	_homeNumber = num;
}
int TelephoneBook::getHnum() {
	return _homeNumber;
}


void add_abonent(TelephoneBook arr[], const int length)
{
	std::string name;
	int number, index;
	for (size_t i = 0; i < length; ) {
		if (arr[i].getName() != "name") {
			i++;
		}
		else
		{
			index = i;
			std::cout << "Введите имя -> ";
			std::cin >> name;
			std::cout << "Введите номер телефона -> ";
			std::cin >> number;
			arr[index].setName(name);
			arr[index].setPhoneNumber(number);
			break;
		}
	}
	std::cout << "Абонент добавлен!\n\n";
}

void show_all_abonent(TelephoneBook arr[], const int length) {
	for (size_t i = 0; i < length; i++) {
		std::cout << i + 1 << ". Имя:\t" << arr[i].getName() << "\tНомер: " << arr[i].getPhoneNum() << '\n';
	}
	std::cout << '\n';
	system("pause");
}

int retNumAbonent(std::string& name, TelephoneBook arr[], const int length) {
	for (size_t i = 0; i < length; i++)
		if (name == arr[i].getName())
		return arr[i].getPhoneNum();	
}

void del_abonent(TelephoneBook arr[], const int length) {
	int index;
	show_all_abonent(arr, length);
	std::cout << "Выберите абонента, которого хотите удалить ->";
	std::cin >> index;
	for (size_t i = index - 1; i < length - 1; i++) {
		arr[i] = arr[i + 1];
	}
}

int actions() {
	int n = 0;
	std::cout << "Выберите действие :\n";
	std::cout << "1. Телефонная книга\n";
	std::cout << "2. Добавление нового контакта\n";
	std::cout << "3. Удаление контакта\n";
	std::cout << "0. Завершение работы\n";
	std::cin >> n;
	return n;
}
