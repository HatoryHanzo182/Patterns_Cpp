#pragma once
#include "Snapshot.h"

class Person
{
private:
    string _name;
    int _age;
    string _phone;
    string _address;
public:
    Person();
    Person(const Person&);

    void SetDataPerson(string, int, string, string);
    Snapshot CreateSnap();
};