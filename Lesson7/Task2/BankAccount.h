#pragma once
#include <string>

class BankAccount
{
	std::string m_accountNumber;
	double m_balance;

public:
	BankAccount();
	BankAccount(std::string accountNumber, double balance);

	~BankAccount();

	std::string getAccountNumber();
	double getBalance();
};
