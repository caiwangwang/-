#include <cstring>
#include "string.h"

using namespace std;

int String::num_strings = 0;

String::String(const char * s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 4;    //why
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    
}

String::~String()
{
    delete[] str;
    num_strings--;
}
//constructors 

String & String::operator=(const String & st)
{
    if(this == &st)
    {
        return *this;
    }
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
}

String & String::operator=(const char * st)
{
    delete[] str;
    len = strlen(st);
    str = new char[len + 1];
    strcpy(str, st);
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}
//overloaded operator methods

bool operator<(const String &st, const String &st2)
{
    return (strcpy(st.str, st2.str) < 0);
}

bool operator>(const String &st, const String &st2)
{
    return (strcpy(st.str, st2.str) > 0);
}

bool operator==(const String &st, const String &st2)
{
    return (strcpy(st.str, st2.str) == 0);
}

ostream  & operator<<(ostream & os, const String &st2)
{
    os << st2.str;
    return os;
}

istream  & operator>>(istream & is, String &st2)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is)
    {
        st2 = temp;
    }
    while(is && is.get() != '\n')
        continue;
    return is;

}
int String::HowMany()
{
    return num_strings;
}
