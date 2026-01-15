#include <iostream>

using namespace std;


class Dog {
private:
	string name, breed;
	int age;

public:
	Dog()
	{
		name = "Casper";
		age = 7;
		breed = "Border Collie";
	}

	void setName(string dName)
	{
		name = dName;
	}

	void setBreed(string dBreed)
	{
		breed = dBreed;
	}

	void setAge(int dAge)
	{
		age = dAge;
	}

	string getName()
	{
		return name;
	}

	int getAge()
	{
		return age;
	}

	string getBreed()
	{
		return breed;
	}

	void bark()
	{
		cout << "Woof! Woof!";
	}
};

int main()
{
	Dog casper;
	string name;

	cout << "Here is a newly created Dog object" << endl;
	cout << "Dog name: " << casper.getName() << endl;
	cout << "Dog age: " << casper.getAge() << endl;
	cout << "Dog breed: " << casper.getBreed() << endl;

	cout << "Enter a new name for the dog. ";
	cin >> name;
	casper.setName(name);

	cout << casper.getName() << " goes "; casper.bark();

}