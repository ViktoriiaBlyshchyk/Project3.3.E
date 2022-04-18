#include "Car.h"
#include "Lorry.h"

Lorry::Lorry(const string tradeMark, const double enginePower, const double numberOfCylinders, const double carryingAbility)
	: Car(tradeMark, enginePower, numberOfCylinders), carryingAbility(carryingAbility)
{}

Lorry::Lorry(const Lorry& l)
	: Car(l)
{
	carryingAbility = l.carryingAbility;
}

Lorry::~Lorry(void)
{}

Lorry& Lorry::operator = (const Lorry& l)
{
	Car::operator = (l);
	carryingAbility = l.carryingAbility;
	return *this;
}

Lorry::operator string () const
{
	stringstream ss;
	ss << "carryingAbility = " << carryingAbility << endl;
	return Car::operator string() + ss.str();
}

ostream& operator << (ostream& out, const Lorry& l)
{
	out << string(l);
	return out;
}

istream& operator >>(istream& in, Lorry& l)
{
	string tradeMark;
	double enginePower;
	double numberOfCylinders;

	cout << endl;
	cout << "tradeMark = "; in >> tradeMark;
	cout << "enginePower = "; in >> enginePower;
	cout << "numberOfCylinders = "; in >> numberOfCylinders;
	enginePower = l.Change1();

	l.SetTradeMark(tradeMark);
	l.SetEnginePower(enginePower);
	l.SetNumberOfCylinders(numberOfCylinders);

	double carryingAbility;
	cout << endl;
	cout << "carryingAbility = "; in >> carryingAbility;

	carryingAbility = l.Change2();
	l.SetCarryingAbility(carryingAbility);

	return in;
}

double Lorry::Change2()
{
	double y;
	cout << "carryingAbility = "; cin >> y;
	carryingAbility = y;
	return y;
}
