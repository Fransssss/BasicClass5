//
// Created by Fransiskus on 8/23/2022.
//

#ifndef BASICCLASS5_VALIDATENUMBER_H
#define BASICCLASS5_VALIDATENUMBER_H

#include "string"
#include "cctype"

using std::string;
using std::isdigit;

bool Valid(const string& strAge)            // age as string
{
    int amountValidDigit = strAge.size();   // simply saying all have to be digit
    int checkAmountValidDigit = 0;          // keep track of digit in input

    for(size_t i = 0; i < strAge.size(); ++i)
    {
        if(isdigit(strAge[0]))
        {
            checkAmountValidDigit += 1;
        }
    }

    if(checkAmountValidDigit != amountValidDigit)
    {
        return false;                        // not all digit
    }

    return true;
}

#endif //BASICCLASS5_VALIDATENUMBER_H
