// Created by Fransiskus Agapa on 8/22/2022.
// Class Definition

#include "Dog.h"
#include "sstream"

using std::stringstream;
using std::to_string;

void Dog::SetType(const string &type)
{
    _typeDog = type;
}

void Dog::SetColor(const string &theColor)
{
    _color = theColor;
}

void Dog::SetYear(const int &theYear)
{
    _year = theYear;
}

string Dog::GetType() const
{
    return _typeDog;
}

string Dog::GetColor() const
{
    return _color;
}

int Dog::GetYear() const
{
    return _year;
}


string Dog::GetJSON() const
{
    stringstream ss;
    ss << "{\"Type\":\"" << _typeDog << "\", \"Color\":\"" << _color << "\", \"Age\":" << to_string(_year) << "}";
    return ss.str();
}


