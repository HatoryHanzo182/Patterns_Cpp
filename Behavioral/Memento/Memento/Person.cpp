#include "Header.h"

Memento::Person::Person()
{
	_name = string();
	_age = int();
	_phone = string();
	_address = string();
}

Memento::Person::Person(const Person& pers)
{
	this->_name = pers._name;
	this->_age = pers._age;
	this->_phone = pers._phone;
	this->_address = pers._address;
}

void Memento::Person::SetDataPerson(string name, int age, string phone, string address)
{
	_name = name;
	_age = age;
	_phone = phone;
	_address = address;
}

Memento::Snapshot Memento::Person::CreateSnap()
{
	return Snapshot(this, _name, _age, _phone, _address);
}
