#include <iostream>

using namespace std;

int main()
{
    struct Car
    {
        string make;
        string model;
        int year;
    };

    Car* car = new Car();

    cout << "Enter the car's make\n";
    cin >> car->make;

    cout << "Enter the car's model\n";
    cin >> car->model;

    cout << "Enter the car's year\n";
    cin >> car->year;

    cout << "You entered " << car->year << " " << car->make << " " << car->model;

    return 0;
}
