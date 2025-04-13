#include <iostream>

using namespace std;

int main()
{
	struct Person
	{
		string name;
		int age;
		float height;
	};

	Person* person_one = new Person();
	person_one->name = "Person One";
	person_one->age = 22;
	person_one->height = 1.8f;

	Person* person_two = new Person();
	person_two->name = "Person Two";
	person_two->age = 42;
	person_two->height = 1.75f;

	cout << "Person one\n";
	cout << "Name:\t" << person_one->name << "\n";
	cout << "Age:\t" << person_one->age << "\n";
	cout << "Height:\t" << person_one->height << "\n";
	cout << "\n";

	cout << "Person two\n";
	cout << "Name:\t" << person_two->name << "\n";
	cout << "Age:\t" << person_two->age << "\n";
	cout << "Height:\t" << person_two->height << "\n";

	return 0;
}