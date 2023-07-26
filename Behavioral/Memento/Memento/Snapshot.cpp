#include "Header.h"

Snapshot::Snapshot(Person* pers, string name, int age, string phone, string address)
{
	_pers = pers;
	_name = name;
	_age = age;
	_phone = phone;
	_address = address;
}

void Snapshot::Restore() { _pers->SetDataPerson(_name, _age, _phone, _address); }
