#include <iostream>
#include "strngbad.h"

using namespace std;

int StringBad::num_strings = 0;

StringBad::StringBad(const char * s)
{
    len = std::strlen(s);   //set size
    str = new char[len +1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \" << str
        << str << endl;
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "c++");
    num_strings++;
    cout << num_strings << ": \" << str
        << str << endl;
}

StringBad::~StringBad()
{
    num_strings--;
    cout << num_strings << ": \"" << str << endl;
    deete[] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}
