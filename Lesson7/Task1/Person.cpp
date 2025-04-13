#include "Person.h"

Person::Person()
	: m_name("Unnamed")
	, m_age(0)
{
}

Person::Person(std::string name, int age)
	: m_name(name)
	, m_age(age)
{
}

Person::~Person()
{

}

std::string Person::getName()
{
	return m_name;
}

void Person::setName(std::string name)
{
	m_name = name;
}

int Person::getAge()
{
	return m_age;
}

void Person::setAge(int age)
{
	m_age = age;
}
