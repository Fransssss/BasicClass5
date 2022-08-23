// Created by Fransiskus on 8/23/2022.
//
// Capitalize words that user input

#ifndef BASICCLASS5_CAPITALIZEWORD_H
#define BASICCLASS5_CAPITALIZEWORD_H

#include "cctype"
#include "string"
using std::string;
using std::islower;
using std::toupper;

string Capitalize (string& word)
{
    if(islower(word[0]))
    {
        word[0] = toupper(word[0]);
    }
    return word;
};


#endif //BASICCLASS5_CAPITALIZEWORD_H
