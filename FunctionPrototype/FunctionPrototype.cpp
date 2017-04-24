// FunctionPrototype.cpp : Defines the entry point for the console application.
//

#include <iostream>


int main()
{
	void intFrac(float, float&, float&); //declaration
	float number, intPart, fracPart;

	do {
		std::cout << "\nEnter a real number: "; // number from user
		std::cin >> number;

		intFrac(number, intPart, fracPart); // find int and frac
		std::cout << "Integer part is " << intPart << ", fraction part is " << fracPart << std::endl; // print them
	} while (number != 0.0); // exit loop on 0.0
	system("pause");
    return 0;
}
//intFrac()
// finds integer and fractional parts of real number
void intFrac(float n, float& intTp, float& fracP)
{
	long temp = static_cast<long>(n); //convert to long
	intTp = static_cast<float>(temp); // back to float
	fracP = n - intTp; // substract integer part
}
