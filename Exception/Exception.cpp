#include <iostream>

class Person
{
public:
	Person(std::string name) : name{name}
	{ 
		std::cout << "Person created -> " << name << std::endl;
	}
	
	~Person()
	{
		std::cout << "Person deleted ->" << name << std::endl;
	}

	void print()
	{
		throw "Print Error";
	}
private:
	std::string name;
};
/*double divide(int a, int b)  //notexcept - willn't generate expeption
{
	if (b > a)
		throw std::string("The second number is greater than the first one");
	if (!b) // b == 0
		throw 0;

	return a / b;
}

void test(int a, int b)
{
	try
	{
		double result{ divide(a, b) };
		std::cout << "Program fully worked, answer: " << result << std::endl;
	}
	catch (int code)
	{
		std::cout << "Error code: " << code << std::endl;
	}
	catch (std::string Error) //or (...). if without std::string{} if funcs -> const char* Error
	{
		std::cout << Error << std::endl;
	}
}*/

void main()
{
	/*test(100, 20);
	test(100, 0);
	test(100, 1000);*/
	try
	{
		Person person{ "Tom" };
		person.print();
	}
	catch (const char* err)
	{
		std::cout << "Error: " << err << std::endl;
	}
}
