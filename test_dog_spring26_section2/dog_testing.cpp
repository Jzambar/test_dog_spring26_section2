#include <iostream>
#include <string>

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
	Dog dog1;
	string name;
	int age;

	cout << "What is your dog's name? ";
	cin >> name;
	dog1.setName(name);

	cout << "How old is " << name << "? ";
	cin >> age;
	dog1.setAge(age);
	cin.ignore();

	cout << "What breed is " << name << "? ";
	getline(cin, name);
	dog1.setBreed(name);

	cout << endl << "Name: " << "\t" << dog1.getName() << endl;
	cout << "Breed: " << "\t" << dog1.getBreed() << endl;
	cout << "Age: " << "\t" << dog1.getAge() << endl << endl;

	cout << dog1.getName() << " goes "; dog1.bark();

}