#include <iostream>
#include "mytime1.h"

using namespace std;

Time::Time(int a, int b)
{
    hours = a;
    minutes = b;
}

Time::Time()
{
}

Time::~Time()
{
    cout << "delete\n";    
}

Time Time::operator+(const Time & t) const
{ 
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::show() const
{
    cout << "hours:minutes\n" << hours << ":" <<  minutes;
}
