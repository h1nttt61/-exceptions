#include "iostream"

double divide(int a, int b)
{
	if (!b)
		throw "Division by zero";
	return a / b;
}

void main()
{
	try
	{
		try
		{
			int a{ 10 }, b {0};
			double result{ divide(a, b) };
			std::cout << result << std::endl;
		}
		catch (unsigned error)
		{
			std::cout << "Inner execption: " << error << std::endl;
		}
		std::cout << "Inner try-catch finished" << std::endl;
		/*catch (const char* error)
		{
			std::cout << "Inner exception: " << error << std::endl;
		}
		std::cout << "Inner try-catch finished" << std::endl;*/
	}
	catch (const char* err)
	{
		std::cout << "External exception: " << err << std::endl;
	}
	std::cout << "External try-catch finished" << std::endl;
}