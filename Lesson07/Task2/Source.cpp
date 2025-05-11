#include <iostream>
#include "BankAccount.h"

int main()
{
	BankAccount* bank_account = new BankAccount;

	std::cout << "Account number:\n";
	std::cout << bank_account->getAccountNumber() << "\n";

	std::cout << "Account balance\n";
	std::cout << bank_account->getBalance() << "\n";

	std::cout << "\n";

	BankAccount* bank_account2 = new BankAccount("0987654321", -100);

	std::cout << "Account number:\n";
	std::cout << bank_account2->getAccountNumber() << "\n";

	std::cout << "Account balance\n";
	std::cout << bank_account2->getBalance() << "\n";

	std::cout << "\n";

	delete bank_account;
	bank_account = nullptr;

	std::cout << "\n";

	delete bank_account2;
	bank_account2 = nullptr;

	std::cout << "\n";

	return 0;
}