/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : Problem_002_4.cpp
Description : .cpp File for Problem Set 2 question 4
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

/* ORIGINAL CODE

#include <iostream>

using namespace std;

class Vehicle
{
	void drive()
	{
	}
};

class Truck : public Vehicle
{
	float loadingCapacity;
};

int main()
{
	Vehicle* vehiclePtr;
	Vehicle vehicle;
	Truck* truckPtr;
	Truck truck;
	vehiclePtr = &truck; //statement 1
	truckPtr = &vehicle; //statement 2
	return 0;
}

*/

// Updated code

#include <iostream>

using namespace std;

class Vehicle
{
public:
    void drive()
    {
    }
};

class Truck : public Vehicle
{
public:
    float loadingCapacity;
};

int main()
{
    Vehicle* vehiclePtr;
    Vehicle vehicle;
    Truck* truckPtr;
    Truck truck;
    vehiclePtr = &truck; // Statement 1

    // Statement 2 - Using static_cast to downcast (not the best idea but it works for this)
    truckPtr = static_cast<Truck*>(vehiclePtr);

    return 0;
}
