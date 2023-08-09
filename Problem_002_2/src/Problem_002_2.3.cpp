/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : Problem_002_2.3.cpp
Description : Fixed code for assignment brief Problem Set 2 question 2.3
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include <iostream>

using namespace std;

class Car
{
public:
    virtual void print()
    {
        cout << "This is a car" << endl;
    }
};

class Toyota : public Car
{
public:
    void print() override
    {
        cout << "This is a Toyota car" << endl;
    }
};

class Honda : public Car
{
public:
    void print() override
    {
        cout << "This is a Honda car" << endl;
    }
};

int main()
{
    Car* carPtr;
    Toyota toyota;
    Honda honda;
    const int SIZE = 5;
    Car* carPtrArr[SIZE];
    carPtrArr[0] = new Toyota();
    carPtrArr[1] = new Toyota();
    carPtrArr[2] = new Honda();
    carPtrArr[3] = new Toyota();
    carPtrArr[4] = new Honda();
    for (int i = 0; i < SIZE; i++)
    {
        carPtr = carPtrArr[i];
        carPtr->print(); // This will now call the appropriate derived class's print function
    }
    for (int i = 0; i < SIZE; i++)
    {
        delete carPtrArr[i];
    }
    return 0;
}
