#include "TelephoneBook.h"

int main() {
	setlocale(0, "ru");
	const int size = 15;
	TelephoneBook abonents[size]{};
	bool work = true;
	while (work) {
		int action = actions();
		switch (action) {
		case 1:show_all_abonent(abonents, size); break;
		case 2:add_abonent(abonents, size); break;
		case 3:del_abonent(abonents, size); break;
		case 0: work = false; break;
		default: std::cout << "Такого действия нет!\n";
		}		
	};
		
}