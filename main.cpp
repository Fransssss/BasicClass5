// Fransiskus Agapa
// 8/22/22

// ================
// user input type of a dog, its hair color and age
// ================

#include <iostream>
#include "Dog.h"
#include "CapitalizeWord.h"
#include "ValidateNumber.h"

using std::cout;
using std::endl;
using std::cin;
using std::stoi;
using std::getline;
using std::string;

int main()
{
    string choice;                // user choice
    cout << "\n== Dog Data Summary ==" << endl;
    cout << "1. Start Input" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "E" and choice != "e")
    {
        if(choice == "1") {
            // create objects when user choose to do this action
            string dogType;
            string dogColor;
            string dogAge;               // use string to ease number validation
            bool validNumber;            // validate number/age that user input
            Dog dog;
            cout << endl;                // create distance between options and choice 1 activity

            // type
            cout << "Input a type of dog: ";
            while(dogType.size() == 0)   // keep asking while there is no answer
            {
                getline(cin, dogType);
            }
            Capitalize(dogType);
            dog.SetType(dogType);
            cout << endl;

            // color
            cout << "Input color of the dog: ";
            cin >> dogColor;
            Capitalize(dogColor);
            dog.SetColor(dogColor);
            cout << endl;

            // age
            cout << "How old is the dog: ";
            cin >> dogAge;
            validNumber = Valid(dogAge);
            if(!validNumber)
            {
                cout << "\n[ Invalid Age ]" << endl;
                dog.SetYear(0);         // set year to 0
            }
            else
            {
                dog.SetYear(stoi(dogAge));
            }
            cout << endl;
            cout << "=============================" << endl << endl;
            cout << "Type of Dog: " << dog.GetType() << endl;
            cout << "Color of Dog: " << dog.GetColor() << endl;
            cout << "Age of Dog: " << dog.GetYear() << " years old"<< endl;
            cout << endl << dog.GetJSON() << endl;
            cout << endl << "=============================" << endl;
        }
        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== Dog Data Summary ==" << endl;
        cout << "1. Start Input" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}

















