#include <iostream>
#include "ShowMenu.h"


int main() {

	int Option;
	double Balance = 220;

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
			double depositAmount;
			std::cin >> depositAmount;
			Balance += depositAmount;
			std::cout << "Succesffully deposited.\n";
			break;

		case 3:
			double withdrawAmount;
			std::cout << "Withdraw amount: ";
			std::cin >> withdrawAmount;
			Balance -= withdrawAmount;
			std::cout << "Successfully withdrawn.\n";

			if (withdrawAmount <= Balance)
				Balance -= withdrawAmount;
			else
				std::cout << "Not enough money \n";
			Balance += depositAmount;
			break;

		default: 
			std::cout << "Error" << std::endl;
		} 
	} while (Option != 4);

    system("pause>0");
}