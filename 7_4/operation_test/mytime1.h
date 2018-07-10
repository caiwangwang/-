#ifndef _MYTIME_H
#define _MYTIME_H

class Time
{
private:
    int hours;
    int minutes;
public:
    Time(int a, int b);
    Time();
    ~Time();
    Time operator+(const Time & t) const;
    void show() const;
};


#endif
