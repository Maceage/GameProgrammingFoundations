#include "BankAccount.h"

#include <iostream>

BankAccount::BankAccount()
	: m_accountNumber("0123456789")
	, m_balance(1234)
{
}

BankAccount::BankAccount(std::string accountNumber, double balance)
	: m_accountNumber(accountNumber)
	, m_balance(balance)
{
}

BankAccount::~BankAccount()
{
	std::cout << "Bank account destroyed!";
}

std::string BankAccount::getAccountNumber()
{
	return m_accountNumber;
}

double BankAccount::getBalance()
{
	return m_balance;
}