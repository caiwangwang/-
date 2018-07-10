#include <iostream>
#include "tabtenn0.h"

using namespace std;

//TableTennisPlayer base class
void TableTennisPlayer::Name() const
{
    cout << lastname << ", " << firstname;
}

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) 
                                    : firstname(fn), lastname(ln), hasTable(ht) {}

//derived clss
RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
                         const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht),rating(r){}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) : TableTennisPlayer(tp), rating(r){}


