#include <iostream>
#include <iomanip>

int main()
{
	int num1;
	float num2;

	std::cout << "Enter two numbers:";
	std::cin >> num1 >> num2;

	float prod = num1 * num2;
	float div = num1 / num2;

	std::setprecision(7);
	std::cout  << "Prod=" << prod << std::endl
		       << "div=" << div << std::endl;
	return 0;

}