// Created by Fransiskus Agapa on 8/22/2022.
// Class Declaration

#ifndef BASICCLASS5_DOG_H
#define BASICCLASS5_DOG_H

#include "string"

using std::string;

class Dog
{
private:
    string _typeDog;
    string _color;
    int _year;

public:
    void SetType(const string& type);
    void SetColor(const string& theColor);
    void SetYear(const int& theYear);
    string GetType() const;
    string GetColor() const;
    int GetYear() const;
    string GetJSON() const;

};


#endif //BASICCLASS5_DOG_H
