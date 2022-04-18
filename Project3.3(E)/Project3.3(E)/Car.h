#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Object.h"

using namespace std;

class Car : 
	public Object
{
private:
    string tradeMark;
    double enginePower;
    double numberOfCylinders;

public:
    string GetTradeMark() const { return tradeMark; }
    double GetEnginePower()  const { return enginePower; }
    double GetNumberOfCylinders() { return numberOfCylinders; }

    void SetTradeMark(string tradeMark) { this->tradeMark = tradeMark; }
    void SetEnginePower(double enginePower) { this->enginePower = enginePower; }
    void SetNumberOfCylinders(double numberOfCylinders) { this->numberOfCylinders = numberOfCylinders; }

    Car();
    Car(const string tradeMark, const double enginePower, const double numberOfCylinders);
    Car(const Car& c);
    ~Car(void);

    Car& operator = (const Car& c);
    operator string () const;

    friend ostream& operator << (ostream& out, const Car& c);
    friend istream& operator >> (istream& in, Car& c);

    Car& operator ++ ();
    Car& operator -- ();
    Car operator ++ (int);
    Car operator -- (int);

    double Change1();
};

