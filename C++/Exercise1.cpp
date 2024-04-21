#include<iostream>

int main()
{
	double a1;
	double a2, a3, a4, volume;

	std::cout << "Enter the value of a1: ";
	std::cin >> a1;

	std::cout << "Enter the value of a2: ";
	std::cin >> a2;

	std::cout << "Enter the value of a3: ";
	std::cin >> a3;

	std::cout << "Enter the value of a4: ";
	std::cin >> a4;

	volume = a1 * a2*(a3 + a4 / 3);

	std::cout << "The Volume of Solid is: " << volume << std::endl;

}