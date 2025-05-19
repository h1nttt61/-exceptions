#include "iostream"

class AgeException
{
public:
	AgeException(std::string message) : message{ message } {}
	std::string GetMessage() const { return message; }
private:
	std::string message;
};

class Person
{
public:
	Person(std::string name, unsigned age)
	{
		if (!age || age > 110)
			throw AgeException{ "Invalid age" };
		this->age = age;
		this->name = age;
	}

	void print() const
	{
		std::cout << "Name: " << name << " Age: " << age << std::endl;
	}
private:
	std::string name;
	unsigned age;
};

void main()
{
	try
	{
		Person tom{ "Tom", 38 };
		tom.print();

		Person max{ "Max", 150 };
		max.print();
	}
	catch (const AgeException& err)
	{
		std::cout << "Error: " << err.GetMessage() << std::endl;
	}
}