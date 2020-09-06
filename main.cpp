#include <iostream>

using namespace std;

int main()
{
    //area formula area = (b * h) / 2
    int base, height;

    cout << "Welcome to the Area Finder!" << endl;

    cout << "Enter base value: ";
    cin >> base;
    cout << "Enter height value: ";
    cin >> height;

    float result = (base * height) / 2;

    cout << "Result of the calculation is: " << result << endl;
    system("Pause");
    return 0;
}
