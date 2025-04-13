#include <iostream>
#include "Person.h"

int main()
{
	Person person("Someone", 30);

	std::string name;
	std::cout << "Enter person name:\n";
	std::cin >> name;

	person.setName(name);

	int age;
	std::cout << "Enter person age:\n";
	std::cin >> age;

	person.setAge(age);

	std::cout << "Name:\n";
	std::cout << person.getName() << "\n";

	std::cout << "Age:\n";
	std::cout << person.getAge() << "\n";

	return 0;
}