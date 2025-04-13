#pragma once
#include <string>

class Person
{
	std::string m_name;
	int m_age;

public:
	Person();
	Person(std::string name, int age);

	~Person();

	std::string getName();
	void setName(std::string name);

	int getAge();
	void setAge(int age);
};