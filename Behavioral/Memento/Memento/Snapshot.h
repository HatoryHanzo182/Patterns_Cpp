#pragma once
#include "Header.h"



class Snapshot
{
private:
    Person* _pers;
    string _name;
    int _age;
    string _phone;
    string _address;
public:
    Snapshot(Person*, string, int, string, string);

    void Restore();
};