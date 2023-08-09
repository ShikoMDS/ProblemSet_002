/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : Problem_002_3.cpp
Description : .cpp File for Problem Set 2 question 3
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

/* ORIGINAL CODE

#include <iostream>

using namespace std;

class Animal
{
	void virtual makeSound() = 0;
};

class Tiger : public Animal
{
};

int main()
{
	Tiger tiger; //compile time error
	return 0;
}

*/

// Fixed updated code
#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0;
};

class Tiger : public Animal
{
public:
	void makeSound() override
	{
		cout << "Tiger roars." << endl;
	}
};

int main()
{
	Tiger tiger; //compile time error
	tiger.makeSound();
	return 0;
}
