#include <windows.h>

void showMenu() {
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 11);
	std::cout << "----------Menu----------\n";
	std::cout << "1. Check balance\n";
	std::cout << "2. Deposit\n";
	std::cout << "3. Withdraw\n";
	std::cout << "4. Exit\n";
	std::cout << "------------------------\n";
}
