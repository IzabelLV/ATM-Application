#include <iostream>
#include "ShowMenu.h"


int main() {

	int Option;
	double Balance = 220;
	double depositAmount;
	double withdrawAmount;

	do {
		
		showMenu();
		std::cout << "Enter option: "; std::cin >> Option;
		system("cls");

		switch (Option) {
		case 1:
			std::cout << "Your balance: " << Balance << " lv.\n";
			break;

		case 2:
			std::cout << "Deposit amount: ";
			std::cin >> depositAmount;
			Balance += depositAmount;
			std::cout << "Successfully deposited.\n";
			break;

		case 3:
			std::cout << "Withdraw amount: ";
			std::cin >> withdrawAmount;
			if (withdrawAmount <= Balance)
				Balance -= withdrawAmount;
				std::cout << "Successfully withdrawn.\n";
			else
				std::cout << "Not enough money \n";
			break;

		default: 
			std::cout << "Error" << std::endl;
		} 
	} while (Option != 4);
	
	system("pause>0");
}
